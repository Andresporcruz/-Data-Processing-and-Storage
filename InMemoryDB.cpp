#include "InMemoryDB.h"

int InMemoryDB::get(const std::string& key) {
    if (transaction && temp_store.find(key) != temp_store.end()) {
        return temp_store[key];
    }
    if (store.find(key) != store.end()) {
        return store[key];
    }
    return -1;  // Return -1 if the key does not exist
}


void InMemoryDB::put(const std::string& key, int value) {
    if (!transaction) {
        throw std::runtime_error("Transaction not in progress");
    }
    temp_store[key] = value;
}

void InMemoryDB::begin_transaction() {
    if (transaction) {
        throw std::runtime_error("Transaction already in progress");
    }
    transaction = true;
    temp_store.clear();
}

void InMemoryDB::commit() {
    if (!transaction) {
        throw std::runtime_error("No transaction in progress");
    }
    store.insert(temp_store.begin(), temp_store.end());
    transaction = false;
    temp_store.clear();
}

void InMemoryDB::rollback() {
    if (!transaction) {
        throw std::runtime_error("No transaction in progress");
    }
    transaction = false;
    temp_store.clear();
}

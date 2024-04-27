#ifndef INMEMORYDB_H
#define INMEMORYDB_H

#include <iostream>
#include <unordered_map>
#include <string>
#include <stdexcept>

class InMemoryDB {
private:
    std::unordered_map<std::string, int> store;
    std::unordered_map<std::string, int> temp_store;
    bool transaction = false;

public:
    int get(const std::string& key);
    void put(const std::string& key, int value);
    void begin_transaction();
    void commit();
    void rollback();
};

#endif // INMEMORYDB_H

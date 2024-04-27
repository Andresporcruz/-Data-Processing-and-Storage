#include "InMemoryDB.h"


int main() {
    InMemoryDB db;

    // Test get on empty database
    std::cout << "Get A: " << db.get("A") << std::endl; // Expected output: -1

    // Test put without transaction
    try {
        db.put("A", 5);
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl; // Expected output: Transaction not in progress
    }

    // Start transaction and put
    db.begin_transaction();
    db.put("A", 5);
    std::cout << "Get A (uncommitted): " << db.get("A") << std::endl; // Expected output: 5

    // Commit and check
    db.commit();
    std::cout << "Get A (committed): " << db.get("A") << std::endl; // Expected output: 5

    // Further testing
    db.begin_transaction();
    db.put("A", 10);
    db.rollback();
    std::cout << "Get A (after rollback): " << db.get("A") << std::endl; // Expected output: 5

    return 0;
}

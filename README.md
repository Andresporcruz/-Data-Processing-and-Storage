InMemoryDB Project
Overview
InMemoryDB is an in-memory key-value store designed to demonstrate basic transactional behavior such as committing and rolling back changes, ensuring atomic operations on the data store.

Features
Transactions: Begin, commit, and rollback transactions.
Key-Value Store: Manage integer values with string keys.
Atomic Operations: Ensure that changes within transactions are either fully committed or discarded.
Prerequisites
C++ Compiler (e.g., g++, Clang)
CMake for building the project (optional)
Installation and Build Instructions
To build and run the InMemoryDB project, follow these steps:

Clone the Repository:
bash
Copy code
git clone https://your-repository-url.com/InMemoryDB.git
cd InMemoryDB
Build the Project:
Using CMake:
bash
Copy code
mkdir build && cd build
cmake ..
make
Direct compilation:
bash
Copy code
g++ -o InMemoryDB main.cpp InMemoryDB.cpp
Run the Project:
bash
Copy code
./InMemoryDB  # Unix-like systems
.\InMemoryDB.exe  # Windows systems

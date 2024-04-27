<h1>InMemoryDB Project</h1>
<h2>Overview</h2>
<p> InMemoryDB is a high-performance, in-memory key-value store explicitly designed to provide a foundational understanding of transactional systems. Enabling users to carry out fundamental transactional operations like committing and rolling back changes, it emulates the essential features of commercial database management systems (DBMS). Atomic operations on the data store are guaranteed by this, which is essential for preserving data integrity in practical applications.<p>.</p>
<h2>Features</h2>
<ul>
  <li><strong>Transactions</strong>: Begin, commit, and rollback transactions.</li>
  <li><strong>Key-Value Store</strong>: Manage integer values with string keys.</li>
  <li><strong>Atomic Operations</strong>: Ensure that changes within transactions are either fully committed or discarded.</li>
</ul>
<h2>Prerequisites</h2>
<ul>
  <li>C++ Compiler (e.g., g++, Clang)</li>
  <li>CMake for building the project (optional)</li>
</ul>
<h2>Installation and Build Instructions</h2>
<p>To build and run the InMemoryDB project, follow these steps:</p>
Clone the Repository:
bash
Copy code
git clone https://github.com/Andresporcruz/-Data-Processing-and-Storage.git
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
<h2>Example Usage</h2>
```cpp
InMemoryDB db;
db.begin_transaction();
db.put("A", 100);
std::cout << db.get("A") << std::endl;  // Outputs -1, changes not visible outside transaction
db.commit();
std::cout << db.get("A") << std::endl;  // Outputs 100, changes visible post-commit
```

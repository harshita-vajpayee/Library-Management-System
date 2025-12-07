# 📚 Library Management System – C++

A simple and beginner-friendly **Library Management System** built using **C++ classes**, **objects**, and **file handling**.  
Originally designed as a Class 12 project, this version has been improved to include persistent storage using binary files, making it feel like a complete, functional application.

---

## ✨ Features

- Add new books to the library  
- Display all stored books  
- Search for a book using its ID  
- Issue a book (mark as issued)  
- Return a book  
- Persistent storage using `books.dat`  
- Organized into multiple files (`main.cpp`, `books.h`, `books.cpp`)  
- Uses OOP concepts such as classes, objects, constructors, and access modifiers  

---

## 📁 Project Structure
```
LibraryManagement/
│
├── main.cpp # Main logic, menus, file handling
├── books.h # Book class declaration
└── books.cpp # Book class method definitions
```

## 🧠 Concepts Used

- **Classes & Objects**
- **Constructors**
- **Encapsulation**
- **Vectors**
- **Binary File Handling**
- **Menu-driven programming**
- **Header files and multi-file projects**

---

## 🛠️ How to Compile & Run

### Using g++:
```
g++ main.cpp books.cpp -o library
./library
```

### Using Windows (MinGW):
```
g++ main.cpp books.cpp -o library.exe
library.exe
```

---

## 💾 File Handling

All book records are stored in a binary file named:

books.dat

So even after closing the program, your library data remains saved and loads automatically when the program starts.

---

## 📜 Sample Features Output

====== Library Management System ======

Add Book

Display All Books

Search Book

Issue Book

Return Book

Exit
Enter choice:

---

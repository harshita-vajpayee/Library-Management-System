#include <iostream>
#include <fstream>
#include <vector>
#include "books.h"
using namespace std;

vector<Book> books;

void loadData() {
    ifstream fin("books.dat", ios::binary);
    if (!fin) return;

    Book temp;
    while (fin.read((char*)&temp, sizeof(Book))) {
        books.push_back(temp);
    }
    fin.close();
}

void saveData() {
    ofstream fout("books.dat", ios::binary | ios::trunc);
    for (auto &b : books) {
        fout.write((char*)&b, sizeof(Book));
    }
    fout.close();
}

void addBook() {
    Book b;
    b.input();
    books.push_back(b);
    saveData();
    cout << "\nBook added successfully!\n";
}

void displayAll() {
    if (books.empty()) {
        cout << "No books found!\n";
        return;
    }
    for (auto &b : books) {
        b.display();
        cout << "---------------------------\n";
    }
}

void searchBook() {
    int id;
    cout << "Enter Book ID: ";
    cin >> id;

    for (auto &b : books) {
        if (b.getId() == id) {
            b.display();
            return;
        }
    }
    cout << "Book not found!\n";
}

void issueBook() {
    int id;
    cout << "Enter Book ID to issue: ";
    cin >> id;

    for (auto &b : books) {
        if (b.getId() == id) {
            if (!b.isIssued()) {
                b.setIssued(true);
                saveData();
                cout << "Book issued successfully!\n";
            } else {
                cout << "Book already issued!\n";
            }
            return;
        }
    }
    cout << "Book not found!\n";
}

void returnBook() {
    int id;
    cout << "Enter Book ID to return: ";
    cin >> id;

    for (auto &b : books) {
        if (b.getId() == id) {
            if (b.isIssued()) {
                b.setIssued(false);
                saveData();
                cout << "Book returned successfully!\n";
            } else {
                cout << "Book was not issued!\n";
            }
            return;
        }
    }
    cout << "Book not found!\n";
}

int main() {
    loadData();
    int choice;

    while (true) {
        cout << "\n====== Library Management System ======\n";
        cout << "1. Add Book\n2. Display All Books\n3. Search Book\n4. Issue Book\n5. Return Book\n6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayAll(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: saveData(); return 0;
            default: cout << "Invalid choice!\n";
        }
    }
}

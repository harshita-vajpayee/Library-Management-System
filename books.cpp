#include <iostream>
#include <cstring>
#include "books.h"
using namespace std;

Book::Book() {
    id = 0;
    issued = false;
}

void Book::input() {
    cout << "Enter Book ID: ";
    cin >> id;
    cin.ignore();

    cout << "Enter Book Title: ";
    cin.getline(title, 50);

    cout << "Enter Author Name: ";
    cin.getline(author, 50);

    issued = false;
}

void Book::display() const {
    cout << "Book ID: " << id << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Issued: " << (issued ? "Yes" : "No") << endl;
}

int Book::getId() const {
    return id;
}

bool Book::isIssued() const {
    return issued;
}

void Book::setIssued(bool status) {
    issued = status;
}

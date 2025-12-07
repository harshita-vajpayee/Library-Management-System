#ifndef BOOK_H
#define BOOK_H

class Book {
    int id;
    char title[50];
    char author[50];
    bool issued;

public:
    Book();
    void input();
    void display() const;
    int getId() const;
    bool isIssued() const;
    void setIssued(bool status);
};

#endif

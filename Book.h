#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class Book{
protected:
    string title;
    string author;
    bool isBorrowed;
public:
    Book(string t = "", string a = "", bool b = false);
    Book(Book& b);

    string getTitle();
    string getAuthor();
    bool getBorrowedStatus();

    void setTitle(string t);
    void setAuthor(string a);
    void setBorrowedStatus(bool b);

    friend bool operator >(Book b1, Book b2);
    friend bool operator <(Book b1, Book b2);
    friend bool operator ==(Book b1, Book b2);
};

class EBook: public Book{
public:
    EBook();
};

class PrintedBook: public Book{
public:
    PrintedBook();
};

#endif
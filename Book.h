#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class Book{
protected:
    enum bookType{none, Ebook, printedBook};
    bookType type;
    string title;
    string author;
    bool isBorrowed;
public:
    Book(string t = "", string a = "", bool b = false, bookType type = printedBook);
    Book(Book& b);

    string getTitle() const;
    string getAuthor() const;
    bool getBorrowedStatus() const;
    bookType getType() const;
    virtual void display() const;

    void setTitle(string t);
    void setAuthor(string a);
    void setBorrowedStatus(bool b);

    friend bool operator >(Book b1, Book b2);
    friend bool operator <(Book b1, Book b2);
    friend bool operator ==(Book b1, Book b2);
};

// class EBook: public Book{
// public:
//     EBook();
// };

// class PrintedBook: public Book{
// public:
//     PrintedBook();
// };

#endif // BOOK_H

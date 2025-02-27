#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(string t, string a, bool b, bookType typ){
    title = t;
    author = a;
    isBorrowed = b;
    type = typ;
}
Book::Book(Book& b){
    title = b.title;
    author = b.author;
    isBorrowed = b.isBorrowed;
}


string Book::getTitle() const
{
    return title;
}

string Book::getAuthor() const 
{
    return author;
}

bool Book::getBorrowedStatus() const 
{
    return isBorrowed;
}

Book::bookType Book::getType() const 
{
    return type;
}

void Book::setTitle(string t)
{
    title = t;
}

void Book::setAuthor(string a)
{
    author = a;
}

void Book::setBorrowedStatus(bool b)
{
    isBorrowed = b;
}

bool operator==(Book b1, Book b2)
{
    return b1.title == b2.title && b1.author == b2.author;
}

bool operator<(Book b1, Book b2)
{
    return b1.title[0] < b2.title[0];
}

bool operator>(Book b1, Book b2)
{
    return b1.title[0] > b2.title[0];
}


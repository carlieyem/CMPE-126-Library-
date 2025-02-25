#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(string t, string a, bool b){
    title = t;
    author = a;
    isBorrowed = b;
}



string Book::getTitle() 
{
    return title;
}

string Book::getAuthor()
{
    return author;
}

bool Book::getBorrowedStatus()
{
    return isBorrowed;
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

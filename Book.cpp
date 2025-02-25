#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(string t, string a, bool b){
    title = t;
    author = a;
    isBorrowed = b;
}

Book::Book(Book& b){
    title = b.title;
    author = b.author;
    isBorrowed = b.isBorrowed;
}
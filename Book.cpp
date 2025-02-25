#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(string t, string a, bool b){
    title = t;
    author = a;
    isBorrowed = b;
}
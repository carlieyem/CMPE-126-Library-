#include <iostream>
#include "Library.h"

using namespace std;

int main() {

    Library myLib;

    myLib.addBook(Book("War and Peace", "Leo Tolstoy"));
    myLib.addBook(Book("Heir to the Empire", "Timothy Zahn"));
    myLib.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald"));

    cout << "Library Collection: \n";
    myLib.displayBooks();

    Book newBook("Rangers Apprentice", "John Flanagan");
    myLib.addBook(newBook);

    cout << "Updated Library Collection: \n";
    myLib.displayBooks();

    cout << "Removing 'War and Peace'\n";
    myLib.removeBook("War and Peace");

    cout << "Library Collection: \n";
    myLib.displayBooks();

    return 0;

}

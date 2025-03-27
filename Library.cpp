#include "Library.h"
#include <iostream>

using namespace std;

void Library::addBook(const Book& book) {
    books.push_back(book);
}

// Remove
void Library::removeBook(const string& title) {
    for (size_t i = 0; i < books.size(); i++) { // Use size_t for proper indexing
        if (books[i].getTitle() == title) {
            books.erase(books.begin() + i);
            return;
        }
    }
}

// Display
void Library::displayBooks() {
    for (size_t i = 0; i < books.size(); i++) {
        cout << "Book " << (i + 1) << ": "
            << books[i].getTitle() << " by "
            << books[i].getAuthor() << (books[i].getBorrowedStatus() ? " (Borrowed)" : " (Available)") << "\n";
    }
}

bool Library::borrowBook(const string& bookTitle)
{
    for (size_t i = 0; i < books.size(); i++)
    {
        if (books[i].getTitle() == bookTitle)
        {
            borrowing.push(books[i]);
            books.erase(books.begin() + i);
            return true;
        }
    }
    return false;
}

void Library::returnBook()
{
    Book& returnedBook = borrowing.front();
    books.push_back(returnedBook);
    borrowing.pop();
}

#ifndef LIBRARY_H
#define LIBRARY_H

#include <optional>
#include <vector>
#include <queue>
#include "Book.h"

class Library {
private:
    vector<Book> books; // List of books
    queue<Book> borrowing;

public:
    void addBook(const Book& book);
    void removeBook(const string& title);
    void displayBooks();

    // returns true if book was in library, otherwise false
    bool borrowBook(const string& bookTitle);
    void returnBook();
};

#endif // LIBRARY_H

#ifndef LIBRARY_H
#define LIBRARY_H

#include <optional>
#include <stack>
#include <vector>
#include <queue>
#include "Book.h"

class Library {
private:
    vector<Book> books; // List of books
    queue<Book> borrowing;
    stack<Book> returning;

public:
    void addBook(const Book& book);
    void removeBook(const string& title);
    void displayBooks();

    // pushes book with given title from book vector into borrowing queue
    // returns true if book was in library, otherwise false
    bool borrowBook(const string& bookTitle);
    // pops the borrowing queue into the returning stack
    void returnBook();

    // to update 'books' vector, 
    // the returning stack will get popped into the books vector
    void endOfDayCheckout();
};

#endif // LIBRARY_H

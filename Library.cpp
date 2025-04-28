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
    returning.push(returnedBook);
    borrowing.pop();
}

void Library::endOfDayCheckout()
{
    while (!returning.empty())
    {
        books.push_back(returning.top());
        returning.pop();
    }
}

//adding search functions
void Book::display() const {
    std::cout << (isBorrowed ? "[Borrowed] " : "[Available] ") << title << " by " << author << std::endl;
}

Book* Library::searchBookByTitle(const std::string& title) const {
    for (const Book& book : books) { // Iterate by reference
        if (book.getTitle() == title && !book.getBorrowedStatus()) {
            cout << "Book found: ";
            book.display();  // Display the details of the found book
            return const_cast<Book*>(&book);  // Return a non-const pointer to the book
        }
    }
    cout << "Book not found or is currently borrowed: " << title << endl;
    return nullptr;
}


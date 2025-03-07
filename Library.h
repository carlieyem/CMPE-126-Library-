#include <vector>
#include "Book.h"

class Library {
private:
    vector<Book> books; // List of books

public:
    void addBook(const Book& book);
    void removeBook(const string& title);
    void displayBooks();
};

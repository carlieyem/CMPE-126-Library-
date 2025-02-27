#include <iostream>
#include "Book.h"

using namespace std;

int main() {
    
    Book book1("War and Peace", "Leo Tolstoy");
    Book book2("Heir to the Empire", "Timothy Zahn");
    Book book3("The Great Gatsby", "F. Scott Fitzgerald", true);

    cout << "Book 1 Title: " << book1.getTitle() << ", Author: " << book1.getAuthor()
    <<", Borrowed: " << (book1.getBorrowedStatus() ? "Yes" : "No") << endl;

    cout << "Book 2 Title: " << book2.getTitle() << ", Author: " << book2.getAuthor()
    <<", Borrowed: " << (book2.getBorrowedStatus() ? "Yes" : "No") << endl;

    cout << "Book 3 Title: " << book3.getTitle() << ", Author: " << book3.getAuthor()
    <<", Borrowed: " << (book3.getBorrowedStatus() ? "Yes" : "No") << endl;

    cout << "Comparing books:" << endl;
    
    if (book1 == book3) {
        cout << "Book 1 and Book 3 are the same." << endl;
    } else {
        cout << "Book 1 and Book 3 are different." << endl;
    }

    if (book1 < book2) {
        cout << "Book 1 comes before Book 2 alphabetically." << endl;
    } else {
        cout << "Book 2 comes before Book 1 alphabetically." << endl;
    }

    if (book1 > book2) {
        cout << "Book 1 comes after Book 2 alphabetically." << endl;
    } else {
        cout << "Book 2 comes after Book 1 alphabetically." << endl;
    }
    cout << "Updating Book 2's status..." << endl;
    book2.setBorrowedStatus(true);
    cout << "Book 2 Borrowed Status: " << (book2.getBorrowedStatus() ? "Yes" : "No") << endl;

    const char *BookTypeName[] = { "none", "Ebook", "printed book"};
    cout << "Book 1's type: " << BookTypeName[book1.getType()] << '\n';

    return 0;
}

#include <iostream>
#include "Library.h"

using namespace std;

int main() {
    Library lib;

    // Add books
    lib.addBook(Book("War and Peace", "Leo Tolstoy"));
    lib.addBook(Book("Heir to the Empire", "Timothy Zahn"));
    lib.addBook(Book("The Great Gatsby", "F. Scott Fitzgerald"));
    lib.addBook(Book("The Lightning Theif", "Rick Riordan"));
    
    // Try searching for an existing book
    Book *searchResult = lib.searchBookByTitle("The Great Gatsby");
    if (!searchResult) { 
        cout << "Search function: FAILED, unable to find 'The Great Gatsby' (should be in the library)\n";
    } else {
        cout << "Search function: OK, found '" << searchResult->getTitle() << "'\n";
    }

    // Try searching fo non-existing book
    searchResult = lib.searchBookByTitle("NONE");
    if (!searchResult) {
        cout << "Searching non-existing book: OK\n";
    } else { 
        cout << "Searching non-existing book: FAILED, found '" << searchResult->getTitle() << "'\n";
    }

    cout << "=== Initial Library Collection ===" << endl;
    lib.displayBooks();

    // Borrow a book
    cout << "\nBorrowing 'War and Peace'..." << endl;
    if (lib.borrowBook("War and Peace")) {
        cout << "Successfully borrowed 'War and Peace'." << endl;
    }
    else {
        cout << "'War and Peace' was not found in the library." << endl;
    }

    //War and Peace is added to the queue

    cout << "\nBorrowing 'Heir to the Empire'..." << endl;
    if (lib.borrowBook("Heir to the Empire")) {
        cout << "Successfully borrowed 'Heir to the Empire'." << endl;
    }
    else {
        cout << "'Heir to the Empire' was not found in the library." << endl;
    }

    // Empire is added to the queue after War and Peace
    //Queue: War and Peace, Empire

    cout << "\n=== Library After Borrowing ===" << endl;
    lib.displayBooks();

    // Return book (simulate person returning it at front desk)
    cout << "\nReturning the borrowed books..." << endl;
    lib.returnBook();
    //War is returned first, and is first on the stack
    lib.returnBook();
    //Empire is returned second, and is the second on the stack


    // End of day: push returning stack back to the books vector
    cout << "\nEnd of Day Checkout..." << endl;
    lib.endOfDayCheckout();

    //Since Empire was added last to the stack, it is the first to be checked back into the library.
    //War is the first added to the stack, it is the last to be checked back into the library.

    cout << "\n=== Final Library Collection ===" << endl;
    lib.displayBooks();

    //Now Empire is before War because of their order in the stack. 

    return 0;
}

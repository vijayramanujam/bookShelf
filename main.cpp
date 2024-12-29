#include <iostream>
#include <vector>
#include <string>
#include "Book.h"

#ifdef _WIN32
#include <windows.h> // For Windows-specific commands
#endif

using namespace std;

// Function to clear the screen
void clearScreen() {
#ifdef _WIN32
    system("cls");  // For Windows
#else
    system("clear");  // For Linux/macOS
#endif
}

// Function to add a book to the list
void addBook(vector<Book>& books) {
    string title, author, status;

    clearScreen();  // Clear screen before input
    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter author name: ";
    getline(cin, author);
    cout << "Enter status (read, currently reading, want to read): ";
    getline(cin, status);

    books.push_back(Book(title, author, status));
}

// Function to display the books
void displayBooks(const vector<Book>& books) {
    clearScreen();  // Clear screen before displaying

    if (books.empty()) {
        cout << "No books in the list!" << endl;
        return;
    }

    cout << "\nBooks in your tracker:" << endl;
    for (size_t i = 0; i < books.size(); ++i) {
        cout << "Book " << i + 1 << ":" << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Status: " << books[i].status << endl;
        cout << "-----------------------------" << endl;
    }

    // Wait for user input before clearing the screen
    cout << "\nPress Enter to return to the menu...";
    cin.ignore();  // Ignore the newline character from previous inputs
    cin.get();     // Wait for user to press Enter
}

// Function to update a book's status
void updateBookStatus(vector<Book>& books) {
    int index;
    clearScreen();  // Clear screen before input
    cout << "Enter the book number to update status: ";
    cin >> index;
    cin.ignore();  // Clear the input buffer

    if (index < 1 || index > books.size()) {
        cout << "Invalid book number!" << endl;
        return;
    }

    string newStatus;
    cout << "Enter new status (read, currently reading, want to read): ";
    getline(cin, newStatus);

    books[index - 1].status = newStatus;
    cout << "Status updated!" << endl;
}

// Function to remove a book from the tracker
void removeBook(vector<Book>& books) {
    int index;
    clearScreen();  // Clear screen before input
    cout << "Enter the book number to remove: ";
    cin >> index;
    cin.ignore();  // Clear the input buffer

    if (index < 1 || index > books.size()) {
        cout << "Invalid book number!" << endl;
        return;
    }

    books.erase(books.begin() + index - 1);
    cout << "Book removed!" << endl;
}

int main() {
    vector<Book> books;
    int choice;

    do {
        clearScreen();  // Clear screen before displaying the menu
        cout << "--- Book Tracker Menu ---\n";
        cout << "1. Add a new book\n";
        cout << "2. Display all books\n";
        cout << "3. Update book status\n";
        cout << "4. Remove a book\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // Clear the input buffer

        switch (choice) {
            case 1:
                addBook(books);
                break;
            case 2:
                displayBooks(books);
                break;
            case 3:
                updateBookStatus(books);
                break;
            case 4:
                removeBook(books);
                break;
            case 5:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}


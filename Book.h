#ifndef BOOK_H
#define BOOK_H

#include <string>

// Book class to represent a book with title, author, and status
class Book {
public:
    std::string title;
    std::string author;
    std::string status;

    // Constructor
    Book(std::string t, std::string a, std::string s);
};

#endif // BOOK_H


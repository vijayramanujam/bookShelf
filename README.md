
# BookShelf

A simple console-based C++ program that allows users to track books they are reading or plan to read. It lets you add, display, update, and remove books from your tracker. The program uses basic C++ concepts, such as classes, vectors, input/output handling, and conditional statements.


## Features

- **Add a new book**: Enter a book's title, author, and reading status.
- **Display all books**: View a list of all books in your tracker with their status.
- **Update book status**: Change the reading status of a book (e.g., "currently reading", "want to read", "finished").
- **Remove a book**: Delete a book from the tracker by specifying its index.
- **Clean interface**: The screen is cleared between actions, and the user is prompted to press Enter to return to the menu after viewing books to avoid clutter.


## Requirements
- C++ Compiler (e.g., g++, clang++)
- Operating System: Windows, Linux, or macOS
- The program uses system("cls") for Windows and system("clear") for Linux/macOS to clear the screen.
## Run Locally

Clone the project

```bash
git clone https://github.com/yourusername/bookShelf.git
```

Go to the project directory

```bash
  cd bookShlef/
```

Compile

```bash
  g++ main.cpp Book.cpp -o bookShelf

```

Run

```bash
  ./bookShelf

```


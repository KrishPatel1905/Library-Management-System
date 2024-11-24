#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 50
#define MAX_AUTHOR 30

struct Book {
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    int id;
    int available;
};

struct Book books[MAX_BOOKS];
int bookCount = 0;

// Function to add a book
void addBook() {
    if (bookCount < MAX_BOOKS) {
        printf("Enter book title: ");
        // Use scanf to read the title, allowing spaces
        scanf(" %[^\n]", books[bookCount].title);  // Reads until newline

        printf("Enter book author: ");
        // Use scanf to read the author, allowing spaces
        scanf(" %[^\n]s", books[bookCount].author);  // Reads until newline

        books[bookCount].id = bookCount + 1;
        books[bookCount].available = 1;
        bookCount++;
        printf("Book added successfully!\n");
    } else {
        printf("Library is full!\n");
    }
}

// Function to display all books
void displayBooks() {
    if (bookCount == 0) {
        printf("No books in library!\n");
    } else {
        printf("Book List:\n");
        for (int i = 0; i < bookCount; i++) {
            printf("%d. %s by %s - %s\n", books[i].id, books[i].title, books[i].author, books[i].available ? "Available" : "Not Available");//#
        }
    }
}

// Function to borrow a book
void borrowBook() {
    int id;
    printf("Enter book ID: ");
    scanf("%d", &id);
    if (id >= 1 && id <= bookCount) {
        if (books[id - 1].available) {
            books[id - 1].available = 0;
            printf("Book borrowed successfully!\n");
        } else {
            printf("Book is not available!\n");
        }
    } else {
        printf("Invalid book ID!\n");
    }
}

// Function to return a book
void returnBook() {
    int id;
    printf("Enter book ID: ");
    scanf("%d", &id);
    if (id >= 1 && id <= bookCount) {
        if (books[id - 1].available) {
            books[id - 1].available = 1;
            printf("Book returned successfully!\n");
        } else {
            printf("Book is already available!\n");
        }
    } else {
        printf("Invalid book ID!\n");
    }
}

// Function to delete a book
void deleteBook() {
    int id;
    printf("Enter book ID: ");
    scanf("%d", &id);
    if (id >= 1 && id <= bookCount) {
        for (int i = id - 1; i < bookCount - 1; i++) {
            books[i] = books[i + 1];
        }
        bookCount--;
        printf("Book deleted successfully!\n");
    } else {
        printf("Invalid book ID!\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("Library Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Borrow Book\n");
        printf("4. Return Book\n");
        printf("5. Delete Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                borrowBook();
                break;
            case 4:
                returnBook();
                break;
            case 5:
                deleteBook();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

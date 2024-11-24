#include <stdio.h>
#include <string.h>

// Define the structure for the book
struct Book {
    int id;            // Book ID
    char title[100];   // Book title
    char author[100];  // Book author
    int isIssued;      // 0 if available, 1 if issued
};

void addBook(struct Book library[], int *bookCount) {
    struct Book newBook;
    
    // Get book details from user
    printf("\nEnter Book ID: ");
    scanf("%d", &newBook.id);
    getchar(); // Clear the newline character
    
    printf("Enter Book Title: ");
    fgets(newBook.title, 100, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = 0;  // Remove the newline at the end
    
    printf("Enter Book Author: ");
    fgets(newBook.author, 100, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = 0; // Remove the newline at the end
    
    newBook.isIssued = 0; // Book is available
    library[*bookCount] = newBook; // Add the book to the library
    (*bookCount)++; // Increase the book count
    
    printf("Book added successfully!\n");
}

void issueBook(struct Book library[], int bookCount) {
    int bookID;
    printf("\nEnter Book ID to issue: ");
    scanf("%d", &bookID);
    
    // Look for the book in the library
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == bookID) {
            if (library[i].isIssued == 0) {
                library[i].isIssued = 1;  // Mark book as issued
                printf("Book '%s' has been issued successfully!\n", library[i].title);
                return;
            } else {
                printf("Sorry, the book '%s' is already issued.\n", library[i].title);
                return;
            }
        }
    }
    
    printf("Book with ID %d not found!\n", bookID);
}

void returnBook(struct Book library[], int bookCount) {
    int bookID;
    printf("\nEnter Book ID to return: ");
    scanf("%d", &bookID);
    
    // Look for the book in the library
    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == bookID) {
            if (library[i].isIssued == 1) {
                library[i].isIssued = 0;  // Mark book as returned
                printf("Book '%s' has been returned successfully!\n", library[i].title);
                return;
            } else {
                printf("The book '%s' was not issued.\n", library[i].title);
                return;
            }
        }
    }
    
    printf("Book with ID %d not found!\n", bookID);
}

void displayBooks(struct Book library[], int bookCount) {
    printf("\nList of Books in the Library:\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d, Title: '%s', Author: '%s', Status: %s\n", 
               library[i].id, library[i].title, library[i].author, 
               library[i].isIssued ? "Issued" : "Available");
    }
}

int main() {
    struct Book library[100];  // Array to store books
    int bookCount = 0;         // Keeps track of the number of books
    int choice;

    do {
        // Display menu options
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Display Books\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addBook(library, &bookCount); // Add a new book
                break;
            case 2:
                issueBook(library, bookCount); // Issue a book
                break;
            case 3:
                returnBook(library, bookCount); // Return a book
                break;
            case 4:
                displayBooks(library, bookCount); // Show all books
                break;
            case 5:
                printf("Exiting the system...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);  // Keep looping until the user chooses to exit
    
    return 0;
}

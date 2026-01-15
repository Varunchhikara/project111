#include <stdio.h>
#include <string.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
};
struct Book library[100];
int count = 0;
void addBook()
{
    printf("Enter Book ID: ");
    scanf("%d", &library[count].id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", library[count].title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", library[count].author);
    count++;
    printf("Book added successfully!\n");
}
void displayBooks()
{
    if (count == 0)
    {
        printf("No books in the library.\n");
        return;
    }
    printf("Books in Library:\n");
    for (int i = 0; i < count; i++)
    {
        printf("ID: %d, Title: %s, Author: %s\n", library[i].id, library[i].title, library[i].author);
    }
}
void searchBook()
{
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            printf("Book Found! Title: %s, Author: %s\n", library[i].title, library[i].author);
            return;
        }
    }
    printf("Book not found.\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n1. Add Book\n2. Display Books\n3. Search Book\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            displayBooks();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);
    return 0;
}
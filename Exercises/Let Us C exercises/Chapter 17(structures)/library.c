#include <stdio.h>
#include <string.h>

struct library
{
    int acc_num;
    char title[50];
    char auth_name[50];
    int price;
    int flag;
};
struct library l[5];
void add_info();
void display_info();
void list_books();
void count_books();
int main()
{
    int prompt;
    printf("Welcome to our digital library!\n");
    printf("What do you want to do today? Please enter a number from the given menu.\n");
    printf("----------------------------------------\n\n");
    printf("1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. List all books of given author\n");
    // printf("4. List the title of specified book\n");
    printf("5. List the count of books in the library\n");
    // printf("6. List the books in the order of accession number\n");
    printf("7. Exit\n");
    scanf("%d", &prompt);
    switch (prompt)
    {
    case 1:
        add_info();
        break;
    case 2:
        display_info();
        break;
    case 3:
        list_books();
        break;
    case 5:
        count_books();
        break;
    case 6:
        add_info();
        break;

    default:
        printf("Thank you for using our library! Have a nice day!\n");
        break;
    }
    return 0;
}
void add_info()
{
    int count = 0, prompt;
    if (count > 4)
    {
        printf("Limit exceeded!");
    }

    printf("Enter book details below.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter accession number: ");
        scanf("%d", &l[i].acc_num);
        printf("Enter title of the book: ");
        scanf("%s", l[i].title);
        printf("Enter author name: ");
        scanf("%s", l[i].auth_name);
        printf("Enter price: ");
        scanf("%d", &l[i].price);
        printf("Press 1 to add another book's information, 0 to exit. ");
        scanf("%d", &prompt);
        if (prompt == 0)
        {
            break;
        }
        count++;
    }
}
void display_info()
{
    printf("The following books are present in the library:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Accession number: %d\n", l[i].acc_num);
        printf("Book name: %s\n", l[i].title);
        printf("Author name: %s\n", l[i].auth_name);
        printf("Price: %d\n", l[i].price);
    }
}

void list_books() //function to list books by author name
{
    char check[50];
    printf("Enter author name: ");
    scanf("%s", check);
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(check, l[i].auth_name == 0))
        {
            printf("%s\n", l[i].title);
        }
    }
}

void count_books()
{
    int count = 0;
    char check[50];
    printf("Enter book name: ");
    scanf("%s", check);
    for (int i = 0; i < 5; i++)
    {
        if (check == l[i].title)
        {
            count += 1;
            printf("Number of titles present: %d", count);
        }
    }
}

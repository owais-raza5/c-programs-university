#include <stdio.h>

struct Books
{
    int id;
    char name[100];
    char author[50];
};

int main()
{
    int sizeOfBooks = 3;
    struct Books book[sizeOfBooks];

    for (int i = 0; i < sizeOfBooks; i++)
    {
        book[i].id = i + 1;
        printf("Enter first book name: ");
        scanf("%s", &book[i].name);
        printf("Enter first book author: ");
        scanf("%s", &book[i].author);
    }

    printf("\n---------All Books---------\n");
    for (int i = 0; i < sizeOfBooks; i++)
    {
        printf("%-2d%-16s%-16s\n", book[i].id, book[i].name, book[i].author);
    }
}
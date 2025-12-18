#include <stdio.h>

struct Books
{
    int id;
    char name[100];
    char author[50];
};

int main()
{
    struct Books b1;
    struct Books b2;

    printf("Enter first book id: ");
    scanf("%d", &b1.id);
    printf("Enter first book name: ");
    scanf("%s", &b1.name);
    printf("Enter first book author: ");
    scanf("%s", &b1.author);

    printf("Enter second book id: ");
    scanf("%d", &b2.id);
    printf("Enter second book name: ");
    scanf("%s", &b2.name);
    printf("Enter second book author: ");
    scanf("%s", &b2.author);

    printf("---------First book---------\n");
    printf("%d %10s %10s\n", b1.id, b1.name, b1.author);
    printf("---------Second book--------\n");
    printf("%d %10s %10s\n", b2.id, b2.name, b2.author);
}
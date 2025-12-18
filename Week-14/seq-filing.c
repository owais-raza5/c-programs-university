// fig11_01.c
// Creating a sequential file with separated inputs

#include <stdio.h>

int main(void) {
    FILE *cfPtr = NULL; // clients.txt file pointer

    // fopen opens the file. Exit the program if unable to create the file
    if ((cfPtr = fopen("C:\\projects\\c-programs\\Week-14\\test.txt", "w")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {
        int account = 0;        // account number
        char name[30] = "";     // account name
        double balance = 0.0;   // account balance

        puts("Enter account number (EOF to end): ");

        // read account number first
        while (scanf("%d", &account) != EOF) {

            printf("Enter name: ");
            scanf("%29s", name);

            printf("Enter balance: ");
            scanf("%lf", &balance);

            // write data to file
            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);

            puts("\nEnter account number (EOF to end): ");
        }

        fclose(cfPtr); // close file
    }

    return 0;
}

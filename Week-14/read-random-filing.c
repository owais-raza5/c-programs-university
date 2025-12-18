// fig11_06.c
// Reading a random-access file sequentially
#include <stdio.h>

// clientData structure definition               
struct clientData {                              
   int account; 
   char lastName[15]; 
   char firstName[10];
   double balance; 
}; 

int main(void) { 
   FILE *cfPtr = NULL; // accounts.dat file pointer

   // fopen opens the file; exits if file cannot be opened
   if ((cfPtr = fopen("C:\\projects\\c-programs\\Week-14\\accounts.dat", "rb")) == NULL)
   {
      puts("File could not be opened.");
   }
   else { 
      printf("%-6s%-16s%-11s%10s\n", "Acct", "First Name",
         "Last Name", "Balance");

      // read all records from file (until eof)
      while (!feof(cfPtr)) { 
         // read a record
         struct clientData client = {0, "", "", 0.0};
         size_t result = 
            fread(&client, sizeof(struct clientData), 1, cfPtr);

         // display record
         if (result != 0 && client.account != 0) {
            printf("%-6d%-16s%-11s%10.2f\n", client.account, 
               client.firstName, client.lastName, client.balance);
         } 
      } 

      fclose(cfPtr); // fclose closes the file
   } 
}
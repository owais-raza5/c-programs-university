#include <stdio.h>

// MY VERSION

// int main() {
//     char str[] = "This is the best way to waste time";

//     for (int i = 0; str[i] != '\0'; i++) {
//         if (str[i] == 32) {
//             for (int j = 0; j < i; j++) {
//                 printf("%c", str[j]);
//             }
//             printf("\n");
//         }
//     }

//     printf("%s\n", str);
// }

// SIR'S VERSION

// int main() {
//     char str[] = "This is the best way to waste time";
//     int i = 0, spc = 0, spcCount = 0;

//     while (str[i] != '\0')
//     {
//         if (str[i] == 32 && spc - spcCount == 0) {
//             spc++;
//             i= -1;
//             printf("\n");
//             spcCount = 0;
//         } else {
//             if (str[i] == 32) {
//                 spcCount++;
//             }
//             printf("%c", str[i]);
//         }
//         i++;
//     }
    
// }

#include <stdio.h>
// my version
// int main()
// {
//     int k = 0;
//     for (int j = 1; j <= 10; j++)
//     {
//         for (int i = 10; i >= 1; i--)
//         {
//             if (k > 0)
//             {
//                 printf(" ");
//             }
//             else
//             {
//                 printf("*");
//             }
//             k--;
//         }
//         k = j;
//         printf("\n");
//     }
// }

// optimised version
int main(void)
{
    int count, spc, a;
    spc = 0;
    for (count = 1; count <= 10; count++)
    {
        // 1 to 10
        for (a = 1; a <= 10; a++)
        {
            printf(spc < a ? "@" : "_");
        }
        spc++;
        printf("\n");
    }
}
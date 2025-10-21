//---------MY VERSION-----------
// #include <stdio.h>

// int main()
// {
//     int cnt, a = 5, inc = 1, spc = 1;

//     for (cnt = 1; cnt <= 9; cnt++)
//     {
//         spc = a;
//         for (int x = 1; x <= a; x++)
//         {
//             if (9 - spc > 0)
//             {
//                 printf(" ");
//             }
//             else
//             {
//                 printf("*");
//             }
//             spc++;
//         }
//         if (a == 9)
//         {
//             inc = -1;
//         }
//         a += inc;
//         printf("\n");
//     }
// }

#include <stdio.h>

int main()
{
    int cnt, a = 5, inc = 1;
    int spc = a - 1;

    for (cnt = 1; cnt <= 9; cnt++)
    {
        for (int x = 1; x <= a; x++)
        {
            printf(spc >= x ? " " : "*");
        }
        if (a == 9)
        {
            inc = -1;
        }
        spc -= inc;
        a += inc;
        printf("\n");
    }
}
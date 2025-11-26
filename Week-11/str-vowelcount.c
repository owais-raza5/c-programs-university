// VERSION 1

// #include <stdio.h>

// int main()
// {
//     char str[] = "i am student of bachelor of computer science";
//     int vowelCount[5] = {0, 0, 0, 0, 0};
//     int index = 0;

//     while (str[index] != '\0')
//     {
//         switch (str[index])
//         {
//         case 'a': {
//             vowelCount[0] += 1;
//             break;
//         }
//         case 'e': {
//             vowelCount[1] += 1;
//             break;
//         }
//         case 'i': {
//             vowelCount[2] += 1;
//             break;
//         }
//         case 'o': {
//             vowelCount[3] += 1;
//             break;
//         }
//         case 'u': {
//             vowelCount[4] += 1;
//             break;
//         }
//         default:
//             break;
//         }
//         index++;
//     }

//     printf("Vowels Count\n");
//     printf("------------\n");
//     printf("%c %6d\n", 'a', vowelCount[0]);
//     printf("%c %6d\n", 'e', vowelCount[1]);
//     printf("%c %6d\n", 'i', vowelCount[2]);
//     printf("%c %6d\n", 'o', vowelCount[3]);
//     printf("%c %6d\n", 'u', vowelCount[4]);
// }

// VERSION 2

#include <stdio.h>

int main()
{
    char str[] = "i am student of bachelor of computer science";
    char vowels[] = "aeiou";
    int vowelCount[5] = {0, 0, 0, 0, 0};
    int index = 0;
    int length = sizeof(vowels) / sizeof(vowels[0]);

    while (str[index] != '\0')
    {
        for (int i = 0; i < length; i++)
        {
            if (str[index] == vowels[i])
            {
                vowelCount[i] += 1;
            }
        }
        index++;
    }

    printf("Vowels Count\n");
    printf("------------\n");
    for (int j = 0; j < length - 1; j++)
    {
        printf("%c %6d\n", vowels[j], vowelCount[j]);
    }
}
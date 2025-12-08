#include <stdio.h>

int main()
{
    int num = 3, index = 0, count = 1, prevIndex = 0;

    printf("Enter value of num: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("Please enter an odd value...");
        return 0;
    }

    int ms[num * num];

    for (int i = 0; i < num * num; i++)
    {
        ms[i] = 0;
    }

    index = num / 2;
    prevIndex = index;
    ms[index] = count;

    while (count != num * num)
    {
        if ((index - num) < 0)
        {
            index = index + (num * num) - num;
        }
        else
        {
            index = index - num;
        }

        if ((index + 1) % num == 0)
        {
            index = index - (num - 1);
        }
        else
        {
            index++;
        }

        if (ms[index] != 0)
        {
            index = prevIndex;
            index = index - num;
        }

        ms[index] = ++count;

        prevIndex = index;
    }

    for (index = 0; index < num * num; index++)
    {
        printf("%3d ", ms[index]);
        if ((index + 1) % num == 0)
        {
            printf("\n");
        }
    }
}
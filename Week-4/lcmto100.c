#include <stdio.h>

int main()
{
    int div = 2;
    int counter = 2;
    int num;

    while (counter <= 100)
    {
        num = counter;
        printf("LCM of %d => ", num);
        while (num != 1)
        {
            if (num % div == 0)
            {
                num /= div;
                printf("%d ", div);
            }
            else
            {
                div++;
            }
        }
        printf("\n");
        counter += 1;
        div = 2;
    }
}
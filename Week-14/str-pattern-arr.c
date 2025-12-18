#include <stdio.h>

int main() {
    char str[] = "This is the best way to waste time";

    char dupe[sizeof(str)] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        dupe[i] = str[i];
        if (str[i] == 32) {
            printf("%s \n", dupe);
        }
    }
    printf("%s \n", dupe);
}
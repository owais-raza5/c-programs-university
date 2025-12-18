#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "This is the best way to waste time";
    char dupe[sizeof str];

    for (size_t i = 0; str[i] != '\0'; i++) {
        if (str[i] == 32) {
            strncpy(dupe, str, i);
            dupe[i] = '\0';
            printf("%s\n", dupe);
        }
    }

    printf("%s\n", str);
    return 0;
}

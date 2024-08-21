#include <stdio.h>

#define MAX_LENGTH 10

int main(void)
{
    int c, i, length, highest;

    int nlength[MAX_LENGTH];
    length = 0;
    highest = 0;

    for (i = 0; i < MAX_LENGTH; ++i)
        nlength[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            ++nlength[length];
            length = 0;
        }
        else
            ++length;
    }

    for (i = 0; i < MAX_LENGTH; ++i) {
        if (nlength[i] > highest) {
            highest = nlength[i];
        }
    }

    int j = 0;
    for (j = highest; j > 0; --j, printf("\n")) {
        for (i = 0; i < MAX_LENGTH; ++i) {
            if (j <= nlength[i])
                printf("| ");
            else if (j == 1)
                printf(". ");
            else
                printf("  ");
        }
    }

    for (i = 0; i < MAX_LENGTH; ++i) 
        printf("%d ", i);
}

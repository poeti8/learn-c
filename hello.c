#include <stdio.h>

int main(void)
{
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        printf("%s", buffer);
    }

    return 0;
}

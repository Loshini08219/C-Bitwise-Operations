#include <stdio.h>

int main()
{
    unsigned char s;

    printf("Enter a value (0-255): ");
    scanf("%hhu", &s);

    if (s & (1 << 6))
    {
        printf("set\n");
    }
    else
    {
        printf("not-set\n");
    }

    return 0;
}

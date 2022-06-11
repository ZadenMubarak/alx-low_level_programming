#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, isupper(c));
    c = 'a';
    printf("%c: %d\n", c, isupper(c));
    return (0);
}
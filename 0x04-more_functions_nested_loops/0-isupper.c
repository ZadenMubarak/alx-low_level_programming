#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char c;

    c = 'A';
    if (isupper(c)){
        printf("1");
        return (1);
    }
    else{
        printf("0");
        return (0);
    }
    // printf("%c: %d\n", c, isupper(c));
    // c = 'a';
    // printf("%c: %d\n", c, isupper(c));
    return 0;
}
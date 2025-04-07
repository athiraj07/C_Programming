#include <stdio.h>
#include <string.h>

int main()
{
    char s[6] = "Hello";
    char *p = s, *t = s + (strlen(s) - 1), temp;
    printf("Before change str is %s \n", s);
    while( p < t) {
        temp = *p;
        *p = *t;
        *t = temp;

        p++;
        t--;
    }

    printf("After change str is %s \n", s);
    return 0;
}
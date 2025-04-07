#include <stdio.h>
#include <string.h>

int main()
{
    int s[] = {1,2,3,4,5};
    int *p = s, *t = s + (sizeof(s)/sizeof(int) - 1), temp,i=0;

    while( p < t) {
        temp = *p;
        *p = *t;
        *t = temp;

        p++;
        t--;
    }
    printf("size of arr is %ld \n", sizeof(s)/sizeof(int));

    while(i<sizeof(s)/sizeof(int))
    {
        printf("After change arr is %d \n", s[i++]);    
    }

    return 0;
}
// C Factorial Program
#include <stdio.h>
#include <stdlib.h>

int fact (int a) {
    if(a==0)
        return 1;
    return (a*fact(a-1));
}


int main() {
    printf("%d", fact(3));
    return 0;
}
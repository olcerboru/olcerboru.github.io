#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int integer1;
    int integer2;
    int x;

    printf("Enter first integer:\n");
    scanf("%d", &integer1);

    printf("Enter second integer:\n");
    scanf("%d", &integer2);

    x = integer1 + integer2;

    printf("Sum is %d\n",x);

    return 0;
}

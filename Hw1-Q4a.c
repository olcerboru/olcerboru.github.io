#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int computeHomeValue(int popularity, int size) {
    return (pow(popularity, 3) + pow(size, 2)) * 10000;
}

int main() {
    int popularity, size;

    printf("Enter popularity: ");
    scanf("%d", &popularity);

    printf("Enter size: ");
    scanf("%d", &size);

    int homeValue = computeHomeValue(popularity, size);
    printf("Home value is: %d TL\n", homeValue);

    return 0;
}

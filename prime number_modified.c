#include <stdio.h>
#include "Dhruv2modified.h"

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (primeChecker(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);

    return 0;
}


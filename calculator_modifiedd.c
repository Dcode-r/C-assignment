#include <stdio.h>
#include "calc_modified_dhruv.h"

int add(int x, int y) { return x + y; }
int subtract(int x, int y) { return x - y; }
int multiply(int x, int y) { return x * y; }

float divide(int x, int y) {
    if (y == 0) return 0;
    return (float)x / y;
}

int (*getAdd())(int, int) { return add; }
int (*getSubtract())(int, int) { return subtract; }
int (*getMultiply())(int, int) { return multiply; }
float (*getDivide())(int, int) { return divide; }

int main() {
    int a, b, option;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Choose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    scanf("%d", &option);

    if (option == 1) {
        int (*fptr)(int, int) = getAdd();
        printf("Result: %d\n", fptr(a, b));
    } else if (option == 2) {
        int (*fptr)(int, int) = getSubtract();
        printf("Result: %d\n", fptr(a, b));
    } else if (option == 3) {
        int (*fptr)(int, int) = getMultiply();
        printf("Result: %d\n", fptr(a, b));
    } else if (option == 4) {
        float (*fptr)(int, int) = getDivide();
        printf("Result: %.2f\n", fptr(a, b));
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}


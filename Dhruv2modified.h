#ifndef DHRUV2MODIFIED_H
#define DHRUV2MODIFIED_H

// Define a function pointer type
typedef int (*PrimeCheckFunc)(int);

// Forward declaration of the function
int isPrime(int n);

// Function pointer initialized to the function
static PrimeCheckFunc primeChecker = isPrime;

// Function definition
int isPrime(int n) {
	int i;
    if (n <= 1) return 0;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

#endif // DHRUV2MODIFIED_H


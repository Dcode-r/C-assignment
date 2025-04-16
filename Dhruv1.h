// palindrome.h

int isPalindrome(int n) {
    int reversed = 0, original = n;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

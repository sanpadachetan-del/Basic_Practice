#include <stdio.h>

int reverse_number(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}

int main() {
    int num, rev, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    rev = reverse_number(num);
    sum = num + rev;

    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", rev);
    printf("Sum of original and reversed number: %d\n", sum);

    return 0;
}

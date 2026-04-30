#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is not a prime number", n);
    }
    else {
        bool is_prime = true;
        int limit = sqrt(n);

        for (int i = 2; i <= limit; i++) {
            if (n % i == 0) {
                is_prime = false;
                break;  // stop early
            }
        }

        if (is_prime) {
            printf("%d is a prime number", n);
        } else {
            printf("%d is not a prime number", n);
        }
    }

    return 0;
}
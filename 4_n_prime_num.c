#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n>1){
        for(int j=2;j<=n;j++){
            bool is_prime = true;
            int limit = sqrt(j);

            for (int i = 2; i <= limit; i++) {
                if (j % i == 0) {
                    is_prime = false;
                    break;  // stop early
                }
            }

            if (is_prime) {
                printf("%d ", j);
            } 
            }
    }
    else{
        printf("Enter a valid number");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n== 1){
        printf("%d is not a prime number",n);
    }
    else if (n==2 || n==3){
        printf("%d is a prime number",n);
    }
    else {
        int i = n;
        int sqt = sqrt(n);
        bool is_prime = true;
        for(;sqt>1;sqt--){
            int ans = i % sqt;
            if(ans == 0){
                is_prime = false;
            }
        }
        if (is_prime){
            printf("%d is a prime number",n);
        }
        else{
            printf("%d is not a prime number",n);
        }

        }


    return 0;
}
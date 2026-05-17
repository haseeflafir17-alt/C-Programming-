#include <stdio.h>

int main(){

    int n, rem;
    long long binary = 0;
    long long place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0){
        printf("Binary = 0");
        return 0;
    }

    while(n != 0){

        rem = n % 2;

        binary = binary + rem * place;

        place *= 10;

        n /= 2;
    }

    printf("Binary = %lld", binary);

    return 0;
}
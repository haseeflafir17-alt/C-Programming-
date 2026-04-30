#include <stdio.h>
int main() {
    int n ; 
    printf("Enter a number : ");
    scanf("%d",&n);
    int fact = 1;
    int i = n;
    while (i>0){
        fact *= i;
        i--;
    }
    printf("The factorial of %d is %d ",n,fact);

    return 0;
}
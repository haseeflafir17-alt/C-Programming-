#include <stdio.h>
int count_digit(int num){
    if(num>=10){
        return 1+count_digit(num/10);
    }
    else{
        return 1;
    }
}
int main(){
    int n;
    printf("Enter the number to check how many digits have : ");
    scanf("%d",&n);
    int digit = count_digit(n);
    printf("\nNimber %d has %d digits",n,digit);
    return 0;
}
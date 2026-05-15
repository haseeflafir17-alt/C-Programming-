#include <stdio.h>

int main(){
    int n,reverse=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num = n;
    while (num !=0)
    {
        int temp = num %10;
        reverse = reverse*10+temp;
        num =num / 10;
    }
    if(n== reverse){
        printf("%d is a palindrome",n);
    }
    else{
        printf("%d is not a palindrome",n);
    }
    

    return 0;
}
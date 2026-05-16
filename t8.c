#include <stdio.h>
int factorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
    
}
int isStrong(int n){
    int num = n;
    int total = 0;
    while (num!=0)
    {
        int temp = num%10;
        total += factorial(temp);
        num /=10;
    }
    if(total == n){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int result = isStrong(n);
    if(result){
        printf("%d is a Strong number",n);
    }
    else{
        printf("%d is not a Strong number",n);
    }
    return 0;
}
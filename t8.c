#include <stdio.h>
int isStrong(int n){
    int num = n;
    int digit = 0;
    while (num!=0)
    {
        num /=10;
        digit++;
    }
    num = n;
    int total = 0;
    for(int i=1;i<=digit;i++){
        int temp= num %10;
        int sum1=1;
        for(int j= 1;j<=temp;j++){
            sum1 = sum1 * j;
        }
        total += sum1;
        num /= 10;
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
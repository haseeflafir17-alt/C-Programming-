#include <stdio.h>
int isAmstrong(int n){
    int digit=0;
    int temp = n;
    while (temp!=0)
    {
        digit++;
        temp = temp/10;
    }
    temp = n;
    int sum=0;
    while (temp!=0)
    {
        int num = temp %10;
        int fade= 1;
        for (int i = 0; i < digit; i++)
        {
            fade = fade * num ;
        }
        sum += fade;
        temp = temp/10;
    }
    if(sum == n){
        return 1;
    }
    else{
        return 0;
    }    
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int result = isAmstrong(num);
    if(result){
        printf("%d is an Amstrong number",num);
    }
    else{
        printf("%d is not an Amstrong number",num);
    }
    return 0;
}
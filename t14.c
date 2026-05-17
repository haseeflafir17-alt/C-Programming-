#include <stdio.h>

int main(){
    int n,i=0;
    int binary[32];
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n==0){
        printf("Binary : %d",n);
    }
    else{
        while (n>0)
        {
            binary[i]= n % 2;
            n /=2;
            i++;
        }
        printf("Binary : ");
        for(int j = i-1;j>=0;j--){
            printf("%d",binary[j]);
        }
    }

    return 0;
}
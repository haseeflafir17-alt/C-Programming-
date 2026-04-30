#include <stdio.h>
#include <math.h>

int main(){
    int n,count,x=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int prime_arr[n];

    if (n>1){
        for (int i = 2; i <= n; i++){
            count = 0;
            int sqt = (int)sqrt(i);
            for(int j=2;j<=sqt;j++){
                if(i %j ==0){
                    count++;
                }
            }
            if(count == 0){
                prime_arr[x]=i;
                x++;
            }

        }
        printf("\nPrime numbers: ");
        for(int q= 0;q<x;q++){
            printf("%d ",prime_arr[q]);
        }
    
    }
    else{
        printf("Enter a number higher then 1");
    }
    return 0;
}
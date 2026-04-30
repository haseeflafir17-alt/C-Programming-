#include <stdio.h>
#include <math.h>

int isPrime(int j){
    int sqt = (int)sqrt(j);
    for(int k =2 ;k<=sqt;k++){
        if(j%k==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n,x=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int prime_arr[n];

    if (n>1){
        for (int i = 2; i <= n; i++){
            
            
            if(isPrime(i)){
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
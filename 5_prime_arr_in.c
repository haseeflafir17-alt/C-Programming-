#include <stdio.h>
#include <math.h>
int isPrime(int j){
    if (j<2){
        return 0;
    }
    else{
        int sqt = (int) sqrt(j);
        for(int i=2;i<=sqt;i++){
            if(j % i == 0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    if(n>=1){
        int input_num[n],prime[n],x=0;
        for(int i = 0;i<n;i++){
            printf("Enter the number %d :",i+1);
            scanf("%d",&input_num[i]);
        }
        for(int i=0;i<n;i++){
            
            if(isPrime(input_num[i])){
                prime[x]=input_num[i];
                x++;
            }
        }
        if(x>0){
            printf("\nPrime numbers: ");
            for(int i=0; i<x;i++){
                printf("%d ",prime[i]);
            }
        }
        else{
            printf("\nThere are no prime numbers");
        }

    }
    else{
        printf("Enter a valid size\n");
    }


    return 0;
}
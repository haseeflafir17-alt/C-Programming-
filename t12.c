#include <stdio.h>
int SumPD(int n){
    int sum =0;
        for(int i =1;i<n;i++){
            
            if(n%i==0){
                sum += i;
            }
        }
    
    return sum;
}
int isPerfect(int n){
    int sum = SumPD(n);
    if(sum == n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int perferct = isPerfect(n);
    if(perferct){
        printf("%d is a Perfect number",n);
    }
    else{
        printf("%d is not a Perfect number",n);
    }
}
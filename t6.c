#include <stdio.h>
int isPrime(int n){
    int found=0;
    if(n>1){
        for(int i = 2; i < n; i++){
            if(n%i==0){
                found++;
                break;
            }
        }
        if(found){
            return 0;
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }

}
int main(){
    int n;
    printf("Enter the number to check weather prime or not? ");
    scanf("%d",&n);
    int result = isPrime(n);
    if(result){
        printf("\n%d is a Prime number",n);
    }
    else{
        printf("\n%d is not a Prime number",n);
    }
    return 0;
}
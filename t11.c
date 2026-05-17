#include <stdio.h>
int main(){
    int n;
    do{
    printf("Enter a Odd number higher than or equal to 5: ");
    scanf("%d",&n);
    }while (n<5 || n%2==0);
        for(int i =1;i<=n;i++){
            for(int j = 1; j<=n;j++){
                if(j==i || j==n-i+1){
                    printf("%d",i);
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    

    return 0;
}
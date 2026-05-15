#include <stdio.h>

int main(){
    int n,k=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int l=0;l<k;l++){
            printf(" ");
        }
        for(int j=i;j<=2*n-i;j++){
            if((j==i)||(j==2*n-i)){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        k++;
        printf("\n");
    }

    return 0;
}
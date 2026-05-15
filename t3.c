#include <stdio.h>

int main() {
    int n,j=1,k=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(;j<=k;j++){
            printf("%d ",j);
        }
        printf("\n");
        k = i+j;
    }

    return 0;
}
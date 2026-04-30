#include <stdio.h>

int main() {
    int n;
    printf("Enter the size : ");
    scanf("%d",&n);
    if(n>0){
        int input_arr[n],reverse_arr[n];
        for(int i=0;i<n;i++){
            printf("Enter the number %d :",i+1);
            scanf("%d",&input_arr[i]);
        }
        for(int j=0,k=n-1;j<n;j++,k--){
            reverse_arr[j]=input_arr[k];
        }
        printf("\nYou entered order: \n");
        for (int i = 0; i < n; i++)
        {
           printf("%d ",input_arr[i]);
        }
        printf("\nReverse order: \n");
        for (int i = 0; i < n; i++)
        {
           printf("%d ",reverse_arr[i]);
        }
        

    }
    else{
        printf("Invalid size");
    }
    return 0;
}
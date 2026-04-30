#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter num : ");
     scanf("%d",arr[0]);
     int max=arr[0];
      int min=arr[0];
      for(int i=1;i<n;i++){
            printf("\nEnter num: ");
            scanf("%d",&arr[i]);
      if (max<arr[i]){
            max=arr[i]; }
      if (min>arr[i]){
            min=arr[i]; }
      }
       printf("\nMax : %d\n",max);
        printf("Min : %d",min);

        return 0;
}

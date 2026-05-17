#include <stdio.h>
void findLargest(int nums[],int n){
    int max= nums[0];
    for(int i=1;i<n;i++){
        if(max<nums[i]){
            max = nums[i];
        }
    }
    printf("\nLargest number is %d",max);
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int nums[n];
    printf("Enter %d numbers \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    findLargest(nums,n);
}
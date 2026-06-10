#include <stdio.h>
int findIndex(int *arr,int size,int target){
    int found=-1;
    for(int i=0;i<size;i++){
        if(*(arr+i)==target){
            found=i;
            break;
        }
    }
    return found;
}
int main(){
    int arr[10];
    int *p = arr;
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("Enter 10 numbers \n");
    for(int i=0;i<size;i++){
        scanf("%d",p+i);
    }
    printf("\nEnter the target :");
    scanf("%d",&target);
    int value = findIndex(p,size,target);
    if(value>=0){
        printf("\nNumber %d found in %d Index",target,value);
    }
    else{
        printf("\nNumber %d not found",target);
    }
    return 0;
}
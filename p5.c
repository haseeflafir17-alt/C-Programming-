#include <stdio.h>
int count_target(int *q,int size,int t){
    int value =0;
    for(int i=0;i<size;i++){
        if(t==(*(q+i))){
            value++;
        }
    }
    return value;
}
int main(){
    int num[10];
    int *p = num;
    int target;
    int size = sizeof(num)/ sizeof(num[0]);
    printf("Enter 10 numbers \n");
    for(int i=0;i<10;i++){
        scanf("%d",(p+i));
    }
    printf("\nEnter the target number : ");
    scanf("%d",&target);
    int value = count_target(num,size,target);
    printf("\nNumber %d appears %d times",target,value);
    return 0;
}
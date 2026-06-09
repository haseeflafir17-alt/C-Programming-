#include <stdio.h>

int positive_count(int *q,int size){
    int count=0;
    for(int i=0;i<size;i++){
        if(*(q+i)>0){
            count++;
        }
    }
    return count;
}

int main(){
    int num[10];
    int size= sizeof(num )/sizeof(num[0]);
    int *p=num;
    printf("Enter the 15 numbers: \n");
    for(int i=0;i<size;i++){
        scanf("%d",(p+i));
    }
    int count= positive_count(p,size);
    printf("\nPositive numbers: %d",count);
    return 0;
}
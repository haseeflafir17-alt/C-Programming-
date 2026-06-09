#include <stdio.h>

int even_count(int *q,int size){
    int count=0;
    for(int i=0;i<size;i++){
        if((*(q+i))%2==0){
            count++;
        }
    }
    return count;
}

int main(){
    int num[15];
    int *p=num;
    printf("Enter the 15 numbers: \n");
    for(int i=0;i<15;i++){
        scanf("%d",(p+i));
    }
    int count= even_count(p,15);
    printf("\nEven numbers: %d",count);
    return 0;
}
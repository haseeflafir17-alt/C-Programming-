#include <stdio.h>

int find_max(int *q,int size){
    int max = *q;
    for(int i=1;i<size;i++){
        if(*(q+i)>max){
            max = *(q+i);
        }
    }
    return max;
}
int find_min(int *q,int size){
    int min = *q;
    for(int i=1;i<size;i++){
        if(*(q+i)<min){
            min = *(q+i);
        }
    }
    return min;
}

int main(){
    int num[10];
    int size= sizeof(num )/sizeof(num[0]);
    int *p=num;
    printf("Enter the 10 numbers: \n");
    for(int i=0;i<size;i++){
        scanf("%d",(p+i));
    }
    int max= find_max(p,size);
    int min = find_min(p,size);
    printf("\nLargest number among the whole number set: %d",max);
    printf("\nSmallest number among the whole number set: %d",min);
    return 0;
}
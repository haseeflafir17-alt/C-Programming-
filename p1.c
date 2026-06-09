#include <stdio.h>

int main(){
    int num[10];
    int *p =num;
    printf("Enter 10 numbers : \n");
    for(int i=0;i<10;i++){
        scanf("%d",(p+i));
    }
    int max=*p;
    int min=*p;
    int sum=*p;
    for(int i=1;i<10;i++){
        if(*(p+i)>max){
            max = *(p+i);
        }
        if(*(p+i)<min){
            min = *(p+i);
        }
        sum += *(p+i);
    }
    printf("\nLargest Number : %d",max);
    printf("\nSmallest Number : %d",min);
    printf("\nSum of all numbers : %d",sum);

    return 0;
}
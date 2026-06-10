#include <stdio.h>

int sumArray(int *p,int size){
    if(size>0){
        return (*p)+sumArray(p+1,size-1);
    }
    else{
        return 0;
    }
}
 int main(){
    int array[]={10,20,30,40,50,60,70,80,90};
    int sum=0;
    int size = sizeof(array)/ sizeof(array[0]);
    sum = sumArray(array,size);
    printf("\n Sum of the array elements : %d",sum);
    return 0;
 }
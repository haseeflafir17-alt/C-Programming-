#include <stdio.h>

int find_min(int *p,int size){
    if(size==1){
        return *p;
    }
    int minRest = find_min(p+1,size-1);
    if(*p<minRest){
        return *p;
    }
    else{
        return minRest;
    }
}
int main(){
    int array[]= {20,90,10,60,30,70};
    int size = sizeof(array)/sizeof(array[0]);
    int min = find_min(array,size);
    printf("\nThe smallest number among the array elements : %d ",min);
    return 0;
}
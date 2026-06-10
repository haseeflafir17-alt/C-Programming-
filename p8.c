#include <stdio.h>
int find_max(int *p,int size){
    if(size == 1){return *p;}
    int maxRest= find_max(p+1,size-1);

    if(*p>maxRest){
        return *p;
    }
    else{
        return maxRest;
    }
}

int main(){
    int array[]={20,50,30,90,80,10,40};
    int size = sizeof(array)/sizeof(array[0]);
    int max = find_max(array,size);
    printf("\nAmong the array elements Largest num %d",max);
    return 0;
}
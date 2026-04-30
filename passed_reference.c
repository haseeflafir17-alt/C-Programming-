#include <stdio.h>
int a=3;



void n(int *x){
    *x = *x * a;
    printf("%d ",x);
}

void m(int *y){
    int a =1;
    a = *y -a;
    n(&a);
    printf("%d ",a);
}


 void main(){
    m(&a);

 }

    
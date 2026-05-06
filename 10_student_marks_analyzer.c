#include <stdio.h>
int main(){
    int n,distinction=0,fail=0,pass=0,total=0;
    printf("Enter number of students: ");
    scanf("%d",&n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the mark of student %d : ",i+1);
        scanf("%d",&marks[i]);
        if(marks[i]>= 75){
            distinction++;
        }
        else if(marks[i]>=50){
            pass++;
        }
        else{
            fail++;
        }
        total += marks[i];
    }
    int max = marks[0],min = marks[0];
    int size = sizeof(marks)/sizeof(marks[0]);
    float average = total/(float)size;
    for(int i = 1; i<size;i++){
        if(max<marks[i]){
            max = marks[i];
        }
        if (min>marks[i]){
            min = marks[i];
        }
    }
    int above_avg[n],count=0;
    for (int i = 0; i < n; i++)
    {
        if(average<marks[i]){
            above_avg[count]= marks[i];
            count++;
        }
    }
    printf("\nHighest : %d",max);
    printf("\nLowest : %d",min);
    printf("\nAverage : %.2f\n",average);
    printf("\nDistinction: %d\n",distinction);
    printf("Pass : %d\n",pass);
    printf("Fail : %d\n",fail);
    printf("\nAbove average marks : \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ",above_avg[i]);
    }
    return 0;
}
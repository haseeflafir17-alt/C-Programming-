#include <stdio.h>
#include <stdbool.h>

void inputNumbers(int arr[], int *count){
    if(*count<10){
        int n;
        printf("\nEnter the number: ");
        scanf("%d",&arr[*count]);
        (*count)++;
        printf("\nNumber entered\n");
    }
    else{
        printf("\nSorry!The list is full\n");
    }
}
void displayNumbers(int arr[], int n){
    if(n>0){
        printf("\n");
        for(int i = 0; i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    else{
        printf("\nEmpty\n");
    }
}
void findLargest(int arr[], int n){
    if(n>0){
        int max = arr[0];
        for (int i = 1; i < n; i++)
        {
        if(max<arr[i]){
            max=arr[i];
        }
        }
        printf("\nThe largest number : %d",max); 
    }
    else{
        printf("\nEmpty\n");
    }   
}
void findSmallest(int arr[], int n){
    if(n>0){
        int min = arr[0];
        for (int i = 1; i < n; i++)
        {
        if(min>arr[i]){
            min=arr[i];
        }
        }
        printf("\nThe Smallest number : %d\n",min); 
    }
    else{
        printf("\nEmpty\n");
    }     
}
void findSumAverage(int arr[],int n){
    if(n>0){
        int sum = 0;
         for(int i = 0;i<n;i++){
            sum += arr[i];
            }
        float avg=0.0;
        avg = (float)sum/n;
        printf("\nSum: %d",sum);
        printf("\nAverage: %.2f\n",avg);
    }
    else{
        printf("\nEmpty\n");
    } 
   
}

int searchNumber(int arr[], int n){
    if(n>0){
    int search,found=0;
    printf("\nSearch a number: ");
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(search==arr[i]){
            found = 1;
            break;
        }
    }
    if(found==1){
        printf("\n%d is in this list\n",search);
    }
    else{
        printf("\n%d is not in this list\n",search);
    }
}
else{
    printf("\nEmpty\n");
}
}
void reverseArray(int arr[], int n){
    if(n>0){
    printf("\nNormal Array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nReverse Array:\n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ",arr[i]);
    }
    
    }
}

int main(){
    int array[10]={0};
    int choice;
    int count =0;
    while (true)
    {
        printf("\n1. Input a number");
        printf("\n2. Display number");
        printf("\n3. Find Largest number");
        printf("\n4. Find Smallest number");
        printf("\n5. Find Sum and Average");
        printf("\n6. Search number");
        printf("\n7. Reverse Array");
        printf("\n8. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            inputNumbers(array,&count);
            break;
        case 2:
            displayNumbers(array,count);
            break;
        case 3:
            findLargest(array, count);
            break;
        case 4:
            findSmallest(array,count);
            break;
        case 5:
            findSumAverage(array,count);
            break;
        case 6:
            searchNumber(array,count);
            break;
        case 7:
            reverseArray(array,count);
            break;
        case 8:
            return 0;
            break;
        default:
            printf("\nInvalid \n");
        }
    }
    

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
    char arr[100];
    printf("Enter a text without put space : ");
    scanf("%s",arr);
    int count1 =0;
    while (arr[count1]!='\0')
    {
        count1++;
    }
    printf("\n%s has %d characters\n",arr,count1);

    char array[100];
    getchar();
    printf("\n\nEnter the text with space : ");
    fgets(array,sizeof(array),stdin);
    array[strcspn(array,"\n")] = '\0';
    int count2 =0;
    while (array[count2]!='\0')
    {
        count2++;
    }
    printf("\n%s has %d characters\n",array,count2);


    return 0;
}
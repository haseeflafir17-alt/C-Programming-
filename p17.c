#include <stdio.h>
#include <string.h>

int main(){
    char original[105];
    char copy[105];
    char half_copy[51];
    char first_10[11];
    do{
        printf("\nEnter the secure application (maximum character 100) : ");
        fgets(original,sizeof(original),stdin);
        original[strcspn(original,"\n")] = '\0';
        if(strlen(original)>100){
            printf("Secure application can contain maximum 100 characters!!!\n");
        }
    }while(strlen(original)>100);
    strcpy(copy,original);
    strncpy(half_copy,original,strlen(original)/2);
    half_copy[strlen(original)/2] = '\0';
    strncpy(first_10,original,10);
    first_10[10] = '\0';
    printf("\nOriginal : %s",original);
    printf("\nLength of Original %d",strlen(original));

    printf("\nCopy : %s ",copy);
    printf("\nLength of Copy %d",strlen(copy));

    printf("\nHalf Copy : %s",half_copy);
    printf("\nLength of Half Copy %d",strlen(half_copy));

    printf("\nFirst 10 characters : %s",first_10);
    printf("\nLength of First 10characters %d",strlen(first_10));

    return 0;
}
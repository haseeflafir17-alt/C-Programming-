#include <stdio.h>
#include <string.h>

int main(){
    char ac_num[15];
    char sec_num[15];
    do{
        printf("\nEnter the Account number : ");
        fgets(ac_num,sizeof(ac_num),stdin);
        ac_num[strcspn(ac_num,"\n")] = '\0';
        if(strlen(ac_num)>12 || strlen(ac_num)<8){
            printf("\nEnter a valid account number\n");
        }
    }while (strlen(ac_num)>12 || strlen(ac_num)<8);
    int size = strlen(ac_num);
    strncpy(sec_num,ac_num,4);
    for(int i=4;i<size;i++){
        sec_num[i] ='X';
    }
    sec_num[size] = '\0';

    printf("\n Full account number : %s ",ac_num);
    printf("\nSecret Number : %s ",sec_num);



    return 0;
}
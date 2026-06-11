#include <stdio.h>
#include <string.h>

int main(){
    char nic[15];
    char nic_cp[15];
    char first_5[6];
    do{
        printf("\nEnter the ID number (OLD: 10 characters / NEW: 12 Characters) : ");
        fgets(nic,sizeof(nic),stdin);
        nic[strcspn(nic,"\n")] = '\0';
    }while(strlen(nic)!=10 && strlen(nic)!=12);
    strcpy(nic_cp,nic);
    strncpy(first_5,nic,5);
    first_5[5] = '\0';

    printf("\nNIC : %s",nic);
    printf("\nCopy of NIC : %s",nic_cp);
    printf("\n1st 5 characters in NIC : %s",first_5);

    return 0;
}
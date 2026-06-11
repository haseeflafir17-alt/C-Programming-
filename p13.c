#include <stdio.h>
#include <string.h>

int main(){
    char full_name[52];
    char backup_name[51];
    char short_name[21];
    printf("Enter the full name : ");
    fgets(full_name,sizeof(full_name),stdin);
    full_name[strcspn(full_name,"\n")] = '\0';
    if(strlen(full_name)>50){
        printf("\nError: Name exceeds 50 characters.\n");
        return 1;
    }
    strcpy(backup_name,full_name);
    strncpy(short_name,full_name,20);
    short_name[20]= '\0';
    printf("\nFull Name : %s",full_name);
    printf("\nBackup Name : %s",backup_name);
    printf("\nShort Name : %s",short_name);


    return 0;
}
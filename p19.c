#include <stdio.h>
#include <string.h>

int main(){
    char email[60];
    char email_cp[60];
    int found =1;
    do{
        printf("\nEnter the Email : ");
        fgets(email,sizeof(email),stdin);
        email[strcspn(email,"\n")] = '\0';
        int size = strlen(email);
        char at_s = '@';
        char dot_s = '.';
        char *at = strchr(email,at_s);
        char *dot = strchr(email,dot_s);
        
        if(at != NULL && dot != NULL){
            found = 0;
        }
        else{
            printf("\nEmail not valid! re-enter\n");
        }

    }while(found);
    strcpy(email_cp,email);
    printf("\nThe email is valid\n");
    printf("\n Copy Mail : %s",email_cp);
    return 0;
}
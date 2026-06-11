#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char user_name[] = "admin";
    char user_input[15];
    do{
    printf("Enter the user name: ");
    fgets(user_input,sizeof(user_input),stdin);
    user_input[strcspn(user_input,"\n")] = '\0';
    int size = strlen(user_input);
    for(int i=0;i<size;i++){
        user_input[i] = tolower(user_input[i]);
    }
    if(strcmp(user_name,user_input) !=0)
        printf("\nInvalid user name");
   

    

}while(strcmp(user_name,user_input));
        printf("\nYou entered the correct username,  Welcome!");

    return 0;
}
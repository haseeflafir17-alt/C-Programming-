#include <stdio.h>
#include <string.h>
int main(){
    char product_code[25];
    char short_code[8];
    char product_copy[25];
    do{
        printf("\nEnter the product ID(It should contain more than 6 characters) : ");
        fgets(product_code,sizeof(product_code),stdin);
        product_code[strcspn(product_code,"\n")] = '\0';
        if(strlen(product_code)<6){
            printf("\nThe product code should  contain alteast 6 characters");
        }
    }while(strlen(product_code)<6);
    strncpy(short_code,product_code,6);
    short_code[6]= '\0';
    strcpy(product_copy,product_code);
    printf("\nFull code : %s",product_code);
    printf("\nSHort Code : %s",short_code);
    printf("\nOriginal copy :%s",product_copy);
    return 0;
}
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char name[10][20];
char phone[10][15];
char email[10][25];
int count = 0;

void add_contact(){
    printf("\nEnter Name :  ");
    scanf("%s",name[count]);
    printf("Enter Phone : ");
    scanf("%s",phone[count]);
    printf("Enter Email : ");
    scanf("%s",email[count]);
    count++;
    printf("Contact added successfully!\n");

}

void search_contact(){
    char search_name[20];
    printf("\nEnter the name to search: ");
    scanf("%s",search_name);
    int found = 0;
    for(int i = 0; i<count;i++){
        if(strcmp(name[i],search_name)==0){
            printf("\nFound\n");
            printf("Name: %s\n",name[i]);
            printf("Phone: %s\n",phone[i]);
            printf("Email: %s\n",email[i]);
            found =1;
            break;
        }
    }
    if(found == 0){
            printf("\n Not found..\n");
    }
}

void view_contact(){
    if(count == 0){
        printf("\nNo contacts available..\n");
        return;
    }
    printf("\n---Contact List---\n");
    for(int i=0;i<count;i++){
        printf("\nContact %d\n",i+1);
        printf("Name: %s\n",name[i]);
        printf("Phone: %s\n",phone[i]);
        printf("Email: %s\n",email[i]);
    }
}

void update_contact(){
    char search_name[20];
    int found =-1;
    printf("\nEnter the name to search : ");
    scanf("%s",search_name);
    for(int i = 0; i<count;i++){
        if(strcmp(name[i],search_name)==0){
            printf("\nFound\n");
            printf("Name: %s\n",name[i]);
            printf("Phone: %s\n",phone[i]);
            printf("Email: %s\n",email[i]);
            found =i;
            break;
        }
    }
    if(found>=0){
        int run = 1;
        while(run){
            printf("\n---What do you want to update? ---\n");
            printf("1. Name\n");
            printf("2. Phone\n");
            printf("3. Email\n");
            printf("4. Exit from update page\n");
            int choice;
            printf("\nEnter your choice : ");
            scanf("%d",&choice);
                switch(choice){
                    case 1:
                        printf("\nEnter new Name: ");
                        scanf("%s",name[found]);
                        printf("\nName updated...");
                        break;
                    case 2:
                        printf("\nEnter new Phone: ");
                        scanf("%s",phone[found]);
                        printf("\nPhone updated...");
                        break;
                    case 3:
                        printf("\nEnter new Email: ");
                        scanf("%s",email[found]);
                        printf("\nEmail updated...");
                        break;
                    case 4:
                        run = 0;
                        break;
                    default:
                        printf("\nInvalid Choice...\n");
                }
        }
    }
    else{
        printf("\nContact not found...\n");
    }

}

void delete_contact(){
    char search_name[20];
    int found =-1;
    printf("\nEnter the name to search : ");
    scanf("%s",search_name);
    for(int i = 0; i<count;i++){
        if(strcmp(name[i],search_name)==0){
            printf("\nFound\n");
            printf("Name: %s\n",name[i]);
            printf("Phone: %s\n",phone[i]);
            printf("Email: %s\n",email[i]);
            found =i;
            break;
        }
    }
    if(found>=0){
        for(int i = found; i< count -1;i++){
            strcpy(name[i],name[i+1]);
            strcpy(phone[i],phone[i+1]);
            strcpy(email[i],email[i+1]);
        }
        count--;
        printf("\nContact deleted successfully!\n");
    }
    else{
        printf("\nContact not found\n");
    }
}


int main(){
    int running = 1;
    while(running){
        int choice;
        printf("\n====Contact Manager====\n");
        printf("1. Add contact\n");
        printf("2. Search contact\n");
        printf("3. View contact\n");
        printf("4. Update contact\n");
        printf("5. Delete contact\n");
        printf("6. Exit\n");
        
        printf("\nEnter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1 :
                add_contact();
                break;
            case 2 :
                search_contact();
                break;
            case 3 :
                view_contact();
                break;
            case 4 :
                update_contact();
                break;
            case 5 :
                delete_contact();
                break;
            case 6 :
                printf("\nExited...");
                running = 0;
                break;
            default:
                printf("\nInvalid choice \n");
        }
    }
    return 0;
}
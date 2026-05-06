#include <stdio.h>
#include <string.h>
#define T 50
#define M 100

void add_book(char name[][M],char author[][M],float price[],int id[],int *count){
    if(*count >= T){
        printf("\nThe list is full, Could't add books!\n");
        return;
    }
    else{
        printf("\nEnter the Book's Name : ");
        fgets(name[*count],M,stdin);
        name[*count][strcspn(name[*count], "\n")] = '\0';
        printf("\nEnter the Book's ID : ");
        scanf("%d",&id[*count]);
        while(getchar() != '\n');
        printf("\nEnter the Book's Author Name : ");
        fgets(author[*count],M,stdin);
        author[*count][strcspn(author[*count], "\n")] = '\0';
        printf("Enter the price : ");
        scanf("%f",&price[*count]);
        while(getchar() != '\n');
        (*count)++;
        printf("\nYou entered a book successfully!\n");
    }
}

int main(){
    int running= 1;
    int id[T],count=0;
    char name[T][M];
    char author[T][M];
    float price[T];
    while (running)
    {
        int choice;
        printf("\nLibrary Book Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Books\n");
        printf("4. Statistics\n");
        printf("5. Update Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        if(scanf("%d",&choice) != 1){
            printf("\nInvalid input! Enter a number.\n");
            while (getchar() != '\n');
            continue;            
        }
        switch (choice)
        {
        case 1:
            while(getchar() != '\n');
            add_book(name, author, price, id, &count);
            break;
            
        case 7:
            running = 0 ;
            printf("\nExited...\n");
            break;
        default:
            printf("\nInvalid Choice\n");
        }
    }
    
    return 0;
}

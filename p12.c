#include <stdio.h>
#include <string.h>

int main(){
    char src[] = "Programming";
    char dest[5];
    strncpy(dest, src, sizeof(dest)-1);
    dest[sizeof(dest)-1]= '\0';
    printf("%s",dest);
    return 0;
}
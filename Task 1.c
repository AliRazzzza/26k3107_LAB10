#include <stdio.h>
#include <string.h>
int main(){
    int lenght;
    char name[30]; 
    char newname[30];
    printf("Enter your name: ");
     scanf(" %29[^\n]", name);
    lenght = strlen(name);
    strcpy(newname, name);
    strcat(newname, " - Fast University");

    printf("Name: %s\n", name);
    printf("Modified name: %s\n", newname);
    printf("Length of original name: %d\n", lenght);
    return 0;
}

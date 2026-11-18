#include <stdio.h>
#include <string.h>

int main(){
    char names[5][100];
    char firstName[100];
    char character;
    int i, length;

    for(i = 0; i < 5; i++){
        printf("Enter name of student %d: ", i + 1);
        scanf(" %99[^\n]", names[i]);
    }

    for(i = 0; i < 5; i++){
        length = strlen(names[i]);

        printf("%s - Length: %d\n",names[i], length);
    }

    strcpy(firstName, names[0]);

    printf("\nEnter a character to search: ");
    scanf(" %c", &character);

    for (i = 0; i < 5; i++) {
        if(strchr(names[i], character) != NULL){
            printf("%c was found in %s\n",character, names[i]);
        }else{
            printf("%c was not found in %s\n",character, names[i]);
        }
    }
    return 0;
}

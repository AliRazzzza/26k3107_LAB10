#include <stdio.h>
#include <string.h>
int main(){
    char sentence[100], newsentence[100];
    char character;
    char *ptr;
    printf("Enter a sentence: ");
    scanf("%99[^\n]", sentence); 
    
    printf("Enter a character: ");
    scanf(" %c", &character);

    ptr = strchr(sentence, character);
    if(ptr != NULL){
        printf("The character '%c' is found at position: %d\n", character, 1 + ptr - sentence);
    } else {
        printf("The character '%c' is not found\n", character);
    }

    strcpy(newsentence, sentence);
    printf("copied sentence: %s\n", newsentence);
    return 0;
}

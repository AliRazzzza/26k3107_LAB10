#include <stdio.h>
#include <string.h>
int main(){
    char product1[50], product2[50];
    printf("Enter the name of the first product: ");
    scanf(" %49[^\n]", product1);
    printf("Enter the name of the second product: ");
    scanf(" %49[^\n]", product2);

    if(strcmp(product1, product2) == 0){
        printf("Same names\n");
    }else{
        printf("Different names\n");
    }
    return 0;
}

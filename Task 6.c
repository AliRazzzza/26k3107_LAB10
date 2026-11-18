#include <stdio.h>
int main(){
    FILE *file;
    char accountNumber[30];
    float amount;

    printf("Enter account number: ");
    scanf("%29s", accountNumber);
    printf("Enter first transaction amount: ");
    scanf("%f", &amount);

    file = fopen("bank.txt", "w");
    if(file == NULL){
        printf("File not found\n");
        return 1;
    }

    fprintf(file, "%s %.2f\n", accountNumber, amount);
    fclose(file);
    printf("Enter second transaction amount: ");
    scanf("%f", &amount);

    file = fopen("bank.txt", "a");
    if(file == NULL){
        printf("File not found\n");
        return 1;
    }

    fprintf(file, "%s %.2f\n", accountNumber, amount);
    fclose(file);
    file = fopen("bank.txt", "r");

    if(file == NULL){
        printf("File not found\n");
        return 1;
    }

    while(fscanf(file, "%29s %f", accountNumber, &amount) == 2){
        printf("Account: %s | Amount: %.2f\n", accountNumber, amount);
    }

    fclose(file);
    return 0;
}

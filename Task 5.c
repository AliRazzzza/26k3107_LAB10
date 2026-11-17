#include <stdio.h>
int main(){
    FILE *file;
    char name[50];
    int obtainedMarks, totalMarks;
    float percentage;

    printf("Enter name: ");
    scanf(" %49[^\n]", name);
    printf("Enter obtained marks: ");
    scanf("%d", &obtainedMarks);
    printf("Enter total marks: ");
    scanf("%d", &totalMarks);

    if(totalMarks <= 0){
        printf("Invalid Input\n");
        return 1;
    }

    percentage = obtainedMarks * 100 / totalMarks;
    file = fopen("student.txt", "w");
    if(file == NULL){
        printf("File not found\n");
        return 1;
    }

    fprintf(file, "%s\n", name);
    fprintf(file, "%d\n", obtainedMarks);
    fprintf(file, "%d\n", totalMarks);
    fprintf(file, "%.2f\n", percentage);
    fclose(file);

    file = fopen("student.txt", "r");
    if(file == NULL){
        printf("File not found\n");
        return 1;
    }
    fscanf(file, " %49[^\n]", name);
    fscanf(file, "%d", &obtainedMarks);
    fscanf(file, "%d", &totalMarks);
    fscanf(file, "%f", &percentage);

    printf("Name: %s\n", name);
    printf("Obtained marks: %d\n", obtainedMarks);
    printf("Total marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    fclose(file);

    return 0;
}

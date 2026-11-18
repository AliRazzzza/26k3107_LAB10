#include <stdio.h>
int main(){
    FILE *file;
    int obtainedMarks, totalMarks;

    file = fopen("marks.txt", "r+");
    if(file == NULL){
        printf("File not found\n");
        return 1;
    }

    printf("Existing obtained marks: %d\n", obtainedMarks);
    printf("Existing total marks: %d\n", totalMarks);
    printf("\nEnter updated marks: ");
    scanf("%d", &obtainedMarks);

    printf("Enter updated total marks: ");
    scanf("%d", &totalMarks);
    rewind(file);
    fprintf(file, "%11d %11d\n", obtainedMarks, totalMarks);
    fclose(file);
    file = fopen("marks.txt", "r");

    if(file == NULL){
        printf("File not found\n");
        return 1;
    }

    fscanf(file, "%d %d", &obtainedMarks, &totalMarks);
    printf("Obtained marks: %d\n", obtainedMarks);
    printf("Total marks: %d\n", totalMarks);

    fclose(file);
    return 0;
}

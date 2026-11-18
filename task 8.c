#include <stdio.h>
int main(){
    FILE *file;
    char studentID[30];
    int obtainedMarks, totalMarks;
    float percentage;

    printf("Enter student ID: ");
    scanf("%29s", studentID);
    printf("Enter obtained marks: ");
    scanf("%d", &obtainedMarks);
    printf("Enter total marks: ");
    scanf("%d", &totalMarks);

    percentage = (obtainedMarks * 100.0) / totalMarks;
    file = fopen("result.txt", "w+");

    if(file == NULL){
        printf("File not found\n");
        return 1;
    }

    fprintf(file, "%s\n", studentID);
    fprintf(file, "%d\n", obtainedMarks);
    fprintf(file, "%d\n", totalMarks);
    fprintf(file, "%.2f\n", percentage);

    rewind(file);
    fscanf(file, "%29s", studentID);
    fscanf(file, "%d", &obtainedMarks);
    fscanf(file, "%d", &totalMarks);
    fscanf(file, "%f", &percentage);

    printf("Student ID: %s\n", studentID);
    printf("Obtained marks: %d\n", obtainedMarks);
    printf("Total marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    fclose(file);
    return 0;
}

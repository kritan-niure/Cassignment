#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    char faculty[20];
    char program[20];
    float GPA;
};

int main() {
    struct Student s[500], st[500];
    FILE *fp;

    fp = fopen("RESULT.DAT", "w+b");
    if (fp == NULL) {
        printf("File could not be opened.\n");
        exit(0);
    }

    printf("Enter the information of 500 Students:\n");
    for (int i = 0; i < 500; i++) {
        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Faculty: ");
        scanf("%s", s[i].faculty);

        printf("Enter Program: ");
        scanf("%s", s[i].program);

        printf("Enter GPA: ");
        scanf("%f", &s[i].GPA);
    }

    printf("\nWriting data to file...\n");
    fwrite(s, sizeof(struct Student), 500, fp); 

    rewind(fp);

    printf("\nReading same content from file...\n");
    fread(st, sizeof(struct Student), 500, fp); 

    printf("\nDisplaying the information on the screen:\n");
    for (int i = 0; i < 500; i++) {
        if (strcmp(st[i].faculty, "Engineering") == 0 && st[i].GPA > 3.5) {
            printf("Name: %s\n", st[i].name);
            printf("Faculty: %s\n", st[i].faculty);
            printf("Program: %s\n", st[i].program);
            printf("GPA: %.2f\n", st[i].GPA);
            printf("-----------------------\n");
        }
    }

    fclose(fp); 
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    int roll;
    char address[30];
    char faculty[20];
};

int main() {
    struct Student s[100], st[100];
    FILE *fp;

    fp = fopen("RESULT.DAT", "w+b"); 
    if (fp == NULL) {
        printf("File could not be opened.\n");
        exit(0);
    }

    printf("Enter the information of 100 Students:\n");
    for (int i = 0; i < 100; i++) {
        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Roll: ");
        scanf("%d", &s[i].roll);

        printf("Enter Address: ");
        scanf("%s", s[i].address);

        printf("Enter Faculty: ");
        scanf("%s", s[i].faculty);
    }

    printf("\nWriting data to file...\n");
    fwrite(s, sizeof(struct Student), 100, fp); 

    rewind(fp); 

    printf("\nReading same content from file...\n");
    fread(st, sizeof(struct Student), 100, fp); 

    printf("\nDisplaying the information on the screen:\n");
    for (int i = 0; i < 100; i++) {
        if (strcmp(st[i].address, "Kathmandu") == 0) { 
            printf("Name: %s\n", st[i].name);
            printf("Roll: %d\n", st[i].roll);
            printf("Address: %s\n", st[i].address);
            printf("Faculty: %s\n", st[i].faculty);
            printf("-----------------------\n");
        }
    }

    fclose(fp);
    return 0;
}


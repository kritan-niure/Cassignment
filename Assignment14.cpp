#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    int id;
    char address[20];
};

int main() {
    struct Person p[50], per[50];
    FILE *fp;

    fp = fopen("person.txt", "w+b"); 
    if (fp == NULL) {
        printf("File could not be opened.\n");
        exit(0);
    }

    printf("Enter the information of Persons: \n");

    for (int i = 0; i < 50; i++) {
        printf("Enter ID: ");
        scanf("%d", &p[i].id);

        printf("Enter address: ");
        scanf("%s", p[i].address);
    }

    printf("Writing information to a file...\n");
    fwrite(p, sizeof(struct Person), 50, fp);

    rewind(fp); // Move file pointer to the beginning

    printf("Reading the same content from the file...\n");
    fread(per, sizeof(struct Person), 50, fp);

    printf("Displaying the information on the screen:\n");
    for (int i = 0; i < 50; i++) {
        if (strcmp(per[i].address, "Bharatpur") == 0) {
            printf("ID: %d\n", per[i].id);
            printf("Address: %s\n", per[i].address);
        }
    }

    fclose(fp);
    return 0;
}


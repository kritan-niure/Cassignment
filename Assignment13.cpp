#include<stdio.h>
#include<string.h>

struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    int id;
    char name[20];
    char department[20];
    struct date dob;
};

int main()
{
    struct employee e[100];

    for(int i=0;i<100;i++)
    {
        printf("ENter id, name, department: ");
        scanf("%d%s%s", &e[i].id, e[i].name, e[i].department);
        printf("ENter dob(dd-mm-yyyy): ");
        scanf("%d%d%d", &e[i].dob.day, &e[i].dob.month, &e[i].dob.year);
    }
    printf("Displayin the info of employees: \n");
    for(int i=0;i<100;i++)
    {
        if(strcmp (e[i].department, "sales")==0)
        {
            printf("Name:%s\t",e[i].name);
            printf("ID: %d\t",e[i].id);
            printf("DOB: %d-%d-%d\t",e[i].dob.month, e[i].dob.year);
            printf("\n");
        }
    }
    return 0;
}
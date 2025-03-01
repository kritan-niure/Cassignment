#include<stdio.h>
void check(int num);
int main()
{
    int num;
    printf("ENter a number:");
    scanf("%d",&num);
    check(num);
    return 0;
}
void check(int num)
{
    if(num%2==1)
    {
        printf("odd number");
    }
    else
    {
        printf("Even number");
    }
}
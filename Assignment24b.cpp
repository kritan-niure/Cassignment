#include<stdio.h>
int swap(int *,int *);

int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("The value of a is %d and b is %d",a,b);
    return 0;
}
int swap(int* p1, int* p2)
{
    int c;
    c=*p1;
    *p1=*p2;
    *p2=c;
    return 1;
}
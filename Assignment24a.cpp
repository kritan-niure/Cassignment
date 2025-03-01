#include<stdio.h>
int swap(int a,int b);

int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
int swap(int a,int b)
{
    int c;
    c=b;
    b=a;
    a=c;
    printf("The value of a is %d and b is %d",a,b);
}
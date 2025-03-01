#include<stdio.h>
void random()
{
    static int a = 1;   
    printf("%d\n", a);
    a=a+1;
}
int main()
{
    random();
    random();
    random();
    return 0;
}
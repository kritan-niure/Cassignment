#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a, s=0;
    a= (int *)malloc(5*sizeof(int));
    printf("Enter 5 elements");
    
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<5; i++)
    {
        s = s+a[i];
    }
    printf("The sum= %d",s);
    return 0;
}
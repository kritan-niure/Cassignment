#include <stdio.h>
int main(){
	int a, b, c;
   printf("The three numbers are : ");
   scanf("%d %d %d", &a, &b, &c);
   
   if(a>b && a>c)
{
   printf("The maximum number is : %d\n", a);
}
else if(b>c && b>a)
{
    printf("The maximum number is : %d\n", b);
}
   else
   {
       printf("The maximum number is : %d\n", c);
   }
    return 0;
}

#include <stdio.h>
int main()
{
  	int a=0, b=1, sum,N;
    scanf("%d",&N);
  	printf("%d\t",a);
  	printf("%d\t",b);
  	for(int i=3; i<=N; i++)
      {
    		sum=a+b;
    		a=b;
    		b=sum;
    		printf("%d\t", sum);
	    }
	return 0;
}

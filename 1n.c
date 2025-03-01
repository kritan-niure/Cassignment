#include <stdio.h>
int main()
{ 
    	for(int n=1; n<=200; n++)
        {
        		int count=0;
        	    for(int i=2; i<n; i++)
        { 
        	       	if(n%i==0)
                  {
        	       		count++;
        	 
        			   }
    	   }
        	if(count==0)
          {
    	    	printf("%d\t",n);
        	}
       }
    	return 0;
}

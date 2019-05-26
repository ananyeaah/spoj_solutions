#include <stdio.h>

int main(void) 
{
int n,c=0,p,i,j;
scanf("%d",&n);
	for(i=1;;i++)
	{p=n/i;
	j=i;
		if(j*i>n)
			break;
		for(j=i;j<=p;j++)
		{
			
			c++;
		}
	
	}
printf("%d\n",c);
	// your code goes here
	return 0;
}

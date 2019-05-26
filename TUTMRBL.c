#include <stdio.h>
long int n,i,flag,c;
int main(void) {
scanf("%ld",&n);
	while(n!=0)
	{long long int n1=n;
		c=1;flag=0;
		for(i=2;i<=n/2;i++)
		{	if((n%i==0)&&(i*i<=n))
			{
				flag=1;
				c++;
				if(c==2)
					printf("%ld = ",n);
			}
				while((n1%i==0)&&(n1>1)&&(c>1))
				{
					n1=n1/i;
					if(n1!=1)
					printf("%ld * ",i);
					else
					printf("%ld",i);
				}
			
		}
		
		if(flag==0)
		{
			printf("%ld = %ld\nWith %ld marbles, 1 different rectangles can be constructed.\n",n,n,n);
		}
		else
		{
			printf("\nWith %ld marbles, %ld different rectangles can be constructed.\n",n,c);
		}
		
	scanf("%ld",&n);
	}
	// your code goes here
	return 0;
}

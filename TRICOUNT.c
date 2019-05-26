#include <stdio.h>
int t,i,j; 
long int n,s,x,y;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{s=0;
		scanf("%ld",&n);
		for(i=1;i<=n;i++)
		{
			if(i==1)
			s=s+n*n;
			else if(i==n)
			s=s+1;
			else
			{
				x=n-i+1;
				s=s+((x*(x+1))/2);
				if(n/i>=2)
				{y=n-i-1;
					s=s+(y*(y+1))/2;
				}
			}
		}
		printf("%ld\n",s);
	}
	// your code goes here
	return 0;
}

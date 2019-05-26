#include <stdio.h>
long long int t=10,i,n,c;
int main(void) {
	while(t--)
	{
		scanf("%lld",&n);
		while(n!=0)
		{
			for(i=2;i*i<=n;i++)
			{
				c=0;
				while(n%i==0)
				{
					c++;
					n=n/i;
				}
				if(c>0)
				printf("%lld^%lld ",i,c);
			}
			if(n>1)
			printf("%lld^1",n);
			printf("\n");
			scanf("%lld",&n);
		}
	}
	// your code goes here
	return 0;
}

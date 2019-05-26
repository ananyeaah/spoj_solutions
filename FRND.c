#include <stdio.h>
long long int s,n,a[10000000],i,c,j,b[10000000],max;
int main(void) {
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}max=0;
	for(i=0;i<n;i++)
	{c=0;
		while(a[i])
		{
			if(a[i]&1)
			{
				b[c]++;	
			}
			a[i]>>=1;
			if(c>max)
			max=c;
			c++;
		}
	}
	for(i=0;i<=max;i++)
	{
		s=s+b[i]*(n-b[i])*pow(2,i);
	}
	printf("%lld\n",s);
	// your code goes here
	return 0;
}
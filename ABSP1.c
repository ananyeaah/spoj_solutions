#include <stdio.h>
long long int s,c,n,t,a[100000],i,j;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{s=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		c=n-1;
		for(i=0,j=n-1;i<j;i++,j--)
		{
			s=s+c*(a[j]-a[i]);
			c=c-2;
		}
		printf("%lld\n",s);
	}
	// your code goes here
	return 0;
}

#include <stdio.h>
long long int n,i,ans;
int t;
long long int gcd(long long int b,long long int a)
{
	if(b==0)
	return a;
	else
	return gcd(a%b,b);
}
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
	scanf("%lld",&n);
		for(i=n/2;i>=n/2-2;i--)
		{
			if(gcd(i,n)==1)
			{
				ans=i;
				break;
			}
		}
		printf("%lld\n",ans);
	}
	// your code goes here
	return 0;
}

#define max(a,b) a>b?a:b
#include <stdio.h>
long long int s=0,i,t,n,dp[10000000],a[1000000];
long long int f1(long long ar[],long long i)
{
	if(i>=n)
	return 0;
	if(dp[i]>0)
	return dp[i];
	else
	return dp[i]=max(ar[i]+f1(ar,i+2),f1(ar,i+1));
}
int main(void) {
	scanf("%lld",&t);
long long int k=1;
	while(t--)
	{
		s=0;
	
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{dp[i]=0;
			scanf("%lld",&a[i]);
		}
		long long int ma=f1(a,0);
		printf("Case %lld: %lld\n",k,ma);
k++;	}
	// your code goes here
	return 0;
}

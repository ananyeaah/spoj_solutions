#define max(a,b) (a>b)?(a):b
#include <stdio.h>
int t,n,p,i,a[100010],ans;
long long s,dp[100010];
long long fun(int i)
{
	if(i>=n)
	return 0;
	if(dp[i]!=-1)
	return dp[i];
	dp[i]=a[i]+fun(i+2);
	if(i+1<n)
	dp[i]=max(dp[i],a[i]+a[i+1]+fun(i+4));
	if(i+2<n)
	dp[i]=max(dp[i],a[i]+a[i+1]+a[i+2]+fun(i+6));
	return dp[i];
}
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			dp[i]=-1;
			scanf("%d",&a[i]);
		}
		long long ans=fun(0);
		printf("%lld\n",ans);
	}
	// your code goes here
	return 0;
}

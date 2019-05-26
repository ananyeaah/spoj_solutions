#define min(a,b) a<b?a:b
#include <stdio.h>
int s=0,j,i,t,n,sqr[10000000],a[1000000],j;
int main(void) {
		/*for(i=0;i<=n;i++)
		{
			dp[i]=0;
		}
		dp[0]=0;
	dp[1]=1;
		dp[2]=2;
dp[3]=3;*/	
	for( i = 0;i*i <= 1000; i++)
		sqr[i*i] = 1;
	
	for(i = 1; i <= 1000; i++)
	{
		if(!sqr[i])
		{
			sqr[i] = 50;
			for( j = 1; j <= i; j++)
			{
				sqr[i] = min(sqr[i], sqr[j] + sqr[i-j]); 
			}
		}
	}
		scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		//int x=fu(n);
		printf("%d\n",sqr[n]);
	}
	// your code goes here
	return 0;
}

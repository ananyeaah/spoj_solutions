#define max(a,b) a>b?a:b
#include <stdio.h>
int t,n,i,j,W,w;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		int dp[1009][1009];
		int wt[10009];
		int v[10009];
		scanf("%d%d",&W,&n);
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&wt[i],&v[i]);
		}
		for(i=0;i<=n;i++)
		{
			for(w=0;w<=W;w++)
			{
				if(i==0||w==0)
				{
					dp[i][w]=0;
				}
				if(wt[i-1]<=w)
				{
					dp[i][w]=max(v[i-1]+dp[i-1][w-wt[i-1]],dp[i-1][w]);
				}
				else
				{
					dp[i][w]=dp[i-1][w];
				}
			}
		}
	//	printf("%d\n",dp[n][W]);
		printf("Hey stupid robber, you can get %d.\n",dp[n][W]);
	}
	// your code goes here
	return 0;
}

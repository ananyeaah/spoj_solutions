#define max(a,b) a>b?a:b
#include <stdio.h>
int t,n,i,j,v[100],W,wt[100],w;
int dp[501][501];
int main(void) {
	scanf("%d%d",&W,&n);
	while(W!=0&&n!=0)
	{
		int s=0;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&wt[i],&v[i]);
		}
		int pick[501][501];
		for(i=0;i<501;i++)
		for(j=0;j<501;j++)
		pick[i][j]=0;
		for(i=0;i<=n;i++)
		{
			for(w=0;w<=W;w++)
			{
				if(i==0||w==0)
				{
					dp[i][w]=0;
					//continue;
				}
				if(wt[i-1]<=w)
				{
					dp[i][w]=max(v[i-1]+dp[i-1][w-wt[i-1]],dp[i-1][w]);
					if(v[i-1]+dp[i-1][w-wt[i-1]]>dp[i-1][w])
					pick[i-1][w]=1;
					else
					pick[i-1][w]=-1;
				}
				else
				{
					pick[i-1][w]=-1;
					dp[i][w]=dp[i-1][w];
				}
			}
		}
		 s=0;
		int n1=n;
		int W1=W;
		while(n1>=0)
		{
			if(pick[n1][W1]==1)
			{
				s+=wt[n1];
				W1-=wt[n1];
				n1--;
			}
			else
			n1--;
		}
//	printf("%d\n",s);
	printf("%d %d\n",s,dp[n][W]);
	//printf("Hey stupid robber, you can get %d.\n",dp[n][W]);
	scanf("%d%d",&W,&n);
	}
	// your code goes here
	return 0;
}

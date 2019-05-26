#include <stdio.h>
#define max(a,b) a>b?a:b
int h,dp[1000][1000],n,i,ans,a[1000][1000];
int absol(int a1,int b)
{
	if(a1>b)
	return a1-b;
	else
	return b-a1;
}
int dyna(int n,int x)
{
	if(dp[n][x]!=-1)
	return dp[n][x];
	if(n==0)
	return dp[n][x]=a[n][x];
	return dp[n][x]=max(dyna(n-1,0)+absol(a[n-1][1],a[n][(x+1)%2])+a[n][x],dyna(n-1,1)+a[n][x]+absol(a[n][(x+1)%2],a[n-1][0]));
}
int main(void) 
{
//	int p[10000]={0};
	scanf("%d",&n);
	memset(dp,-1,sizeof dp);
	for(i=0;i<n;i++)
	{
//		for(h=0;h<2;h++)
//		dp[i][h]=0;
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
int x=dyna(n-1,0);
int y=dyna(n-1,1);
	printf("%d\n",max(x,y));
/*dp[0][0]=wi[0];
dp[0][1]=he[0];
p[0]=2;
	for(i=1;i<=n;i++)
	{
		dp[i][0]=max(wi[i]+absol(he[i],he[i-1])+dp[i-1][1],wi[i]+absol(he[i],wi[i-1])+dp[i-1][0]);
		dp[i][1]=max(he[i]+absol(wi[i],he[i-1])+dp[i-1][1],he[i]+absol(wi[i],wi[i-1])+dp[i-1][0]);
		p[i]=max(dp[i][0],dp[i][1]);
	}
//	ans=max(x,y);
for(i=0;i<n;i++)
	printf("%d\n",p[i]);
*/	// your code goes here
	return 0;
}
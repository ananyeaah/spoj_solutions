#define min(a,b) a<b?(a):(b)
#include <stdio.h>
int t,i,j,k;
char s1[2010],s2[2010];
int dp[2010][2010];
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",&s1,&s2);
	int	m=strlen(s1);
	int	n=strlen(s2);
	//printf("1%s%s2",s1,s2);
		for(i=0;i<=m;i++)
		{
			dp[i][0]=i;
		}
		for(i=0;i<=n;i++)
		{
			dp[0][i]=i;
		}
	
		for(j=1;j<=n;j++)
		{
			for(i=1;i<=m;i++)
			{
				int m=(s1[i-1]==s2[j-1])? 0:1;
                int temp1=min(dp[i-1][j]+1,dp[i][j-1]+1);
              int temp2=dp[i-1][j-1]+m;
              dp[i][j]=min(temp1,temp2);
			}
		}
		printf("%d\n",dp[m][n]);
		/*for(i=0;i<=m;i++)
		{for(j=0;j<=n;j++)
	printf("%d ",dp[i][j]);	
	printf("\n");*/
	
	}
	// your code goes here
	return 0;
}

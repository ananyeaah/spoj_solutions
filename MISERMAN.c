#define max(a,b) a<b?a:b
#include <stdio.h>
//using namespace std;
int x,m1,a[110][110],dp[110][110],i,j,m,n,t;
int main() {
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
//				cin >> a[i][j];
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==0)
				{
					dp[i][j]=a[i][j];
				}else{
				m1=1900;
				if(i>0)
				{
					x=a[i][j]+dp[i-1][j];
					m1=max(x,m1);
				}
				if(i>0&&j>0)
				{
					x=a[i][j]+dp[i-1][j-1];
					m1=max(x,m1);
				}
				if(j<n-1&&i>0)
				{
					x=a[i][j]+dp[i-1][j+1];
					m1=max(m1,x);		
				}
				dp[i][j]=m1;}
				//dp[i][j]=max(a[i][j]+dp[i-1][j])
			}
		}
		int max1;
		max1=1000;
		for(i=0;i<n;i++)
		{
			if(dp[m-1][i]<max1)
			max1=dp[m-1][i];
		}
//		cout <<max1<<endl;
		printf("%d\n",max1);
	// your code goes here
	return 0;
}
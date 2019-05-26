#define max(a,b) (a>b)?a:b
#include <stdio.h>
int t;
int s1[10000],s2[10000],lcs[2010][2010],x,y;
int fun(int i,int j)
{
	for(x=0;x<=i;x++)
	{
		for(y=0;y<=j;y++)
		{
			if(x==0||y==0)
			lcs[x][y]=0;
			else if(s1[x-1]==s2[y-1])
			lcs[x][y]=lcs[x-1][y-1]+1;
			else
			lcs[x][y]=max(lcs[x-1][y],lcs[x][y-1]);
		}
	}
	return lcs[i][j];
}
int n,n1,c;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int c=0;
		s1[c++]=n;
		while(s1[c-1]!=0)
		{
			scanf("%d",&s1[c]);
			c++;
		}
		int n1;
		int c1=0;
		scanf("%d",&s2[c1]);
		c1++;
		int ans,m=0;
		while(s2[c1-1]!=0)
		{
			while(s2[c1-1]!=0)
			{
				
				
				scanf("%d",&s2[c1]);
				c1++;
			}
			int ans=fun(c-1,c1-1);
			if(ans>m)
			m=ans;
			c1=0;
			scanf("%d",&s2[c1]);
			c1++;
		}
		printf("%d\n",m);
	}
	// your code goes here
	return 0;
}

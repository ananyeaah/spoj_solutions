#define min(a,b) (a<b)?a:b
#include <stdio.h>
int t,i,k,a[110],s[110][110],j,n,b[110][110];
int mix(int i,int j)
{
	int k,q;
	
	if(i==j)
	return b[i][j]=0;
	if(b[i][j]!=-1)
	return b[i][j];
	q=10000000;
	for(k=i;k<j;k++)
	{
		q=min(q,(mix(i,k)+mix(k+1,j)+(s[i][k]%100)*(s[k+1][j]%100)));
	}
	return b[i][j]=q;
}

int main(void) {
	while(scanf("%d",&n)==1)
	{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			b[i][j]=-1;
		}
		for(i=0;i<n;i++)
		{
			s[i][i]=a[i];
			for(j=i+1;j<n;j++)
			{
				s[i][j]=a[j]+s[i][j-1];
				//printf("s[i][j]%d %d %d\n",s[i][j],i,j);
			}
		}
		int ans=mix(0,n-1);
		printf("%d\n",ans);
		/*for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			printf("%d\n",b[i][j]);
		}*/
	}
	// your code goes here
	return 0;
}

#include<bits/stdc++.h>
int main()
{
	int n,t;
	scanf("%d",&t);
	while(t--)
	{
		int a[20010]={0},left=n,i,j,c,pos=1;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			left=n-i+1;
			left=i%left+1;
			c=0;
			for(j=pos;;j++)
			{
				if(j>n)
				j=1;
				if(a[j]==0)
				c++;
				if(c==left)
				break;
			}
			a[j]=i;
			pos=j;
		}
		for(i=1;i<=n;i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}
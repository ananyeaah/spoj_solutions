#include <stdio.h>
int t,n,i,a[1000010];
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		int a[1000010]={0};
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int c=1;
		int ans=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]==ans)
			c++;
			else
			c--;
			if(c==0)
			{
				c=1;
				ans=a[i];
			}
		}
		int count=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==ans)
			{
				count++;
			}
		}
		
		if(count>n/2)
		printf("YES %d\n",ans);
		else
		printf("NO\n");
		
	}
	// your code goes here
	return 0;
}

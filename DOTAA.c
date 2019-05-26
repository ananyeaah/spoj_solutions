#include <stdio.h>
int t,flag,i,h,d,m,n,ans;
int main(void) {
scanf("%d",&t);
	while(t--)
	{ans=0;flag=0;
	scanf("%d%d%d",&n,&m,&d);
		for(i=0;i<n;i++)
		{
			scanf("%d",&h);
			if(h>d){
			while(h>0)
			{
				h=h-d;
				ans++;
				
			}
			ans--;
			}
	
		}
		if(ans>=m)
		printf("YES\n");
		else
		printf("NO\n");
	}

	// your code goes here
	return 0;
}

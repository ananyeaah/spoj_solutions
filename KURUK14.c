#include <stdio.h>
long long int flag=0,t,i,n,a[1000000],b[10000000],j;
int main(void) {
scanf("%lld",&t);
	while(t--)
	{flag=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[a[i]]++;
		}
		if(b[n-1]!=2)
		{flag=1;
		printf("NO\n");
		continue;}
		if(n%2==0)
		{
			for(i=1,j=n-2;i<=n/2;i++,j--)
			{
				if(b[i]+b[j]!=2)
				{flag=1;break;
		//			printf("NO\n");
		//continue;
				}
			}
		}
		else
		{
			for(i=1,j=n-2;i<n/2;i++,j--)
			{
				if(b[i]+b[j]!=2)
				{flag=1;break;
		//			printf("NO\n");
		//continue;
				}
			}
			if(b[n/2]!=1)
			flag=1;
		}
			if(flag==1)
			printf("NO\n");
			else
			printf("YES\n");
	}
	// your code goes here
	return 0;
}

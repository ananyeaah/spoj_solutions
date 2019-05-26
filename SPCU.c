#include <stdio.h>
long long int c,flag,t,n,a[1000000],i,j,b[10000000];
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{flag=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			//b[a[i]]++;
			if(a[i]>i)
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
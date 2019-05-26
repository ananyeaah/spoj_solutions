#include <stdio.h>
long long int n,flag,s,t,i,j,a[1000000];
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{s=0;flag=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{scanf("%lld",&a[i]);
		s+=a[i];
		if(a[i]>=n)
		flag=1;
		}
		if((s%(n-1)==0)&&(flag==0))
		printf("%lld\n",s/(n-1));
		else
		printf("-1\n");
	}
	// your code goes here
	return 0;
}

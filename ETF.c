#include <stdio.h>
//long long int seive[10000000]={0};
long long int t,n,i,ans,c;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
	ans=n;	//func(n);
		for(i=2;i*i<=n;i++)
		{if(n%i==0)
			ans=ans-ans/i;
			while(n%i==0)
			n=n/i;
		}
		if(n>1)
		ans=(ans-ans/n);
	
	
	
	printf("%lld\n",ans);
	}
	
	// your code goes here
	return 0;
}
#include <stdio.h>
//long long int seive[10000000]={0};
long long int t,n1,n,i,ans,c,x,sum;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
	sum=0;
	scanf("%lld",&x);
		for(n1=1;n1<=x;n1++)
		{n=n1;
			ans=n;
	//func(n);
				for(i=2;i*i<=n;i++)
				{
					if(n%i==0)
					ans=ans-ans/i;
					while(n%i==0)
					n=n/i;
				}
		if(n>1)
		ans=(ans-ans/n);
		sum+=ans;
//		printf("%lld\n",ans);
		}
	
		
		printf("%lld\n",sum*sum);
	}
	// your code goes here
	return 0;
}
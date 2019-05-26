#include <stdio.h>
//long long int seive[10000000]={0};
long long int t,n1,n,i,ans,c,x,sum,k=1;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
	sum=0;
	scanf("%lld",&x);
		for(n1=2;n1<=x;n1++)
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
		sum=sum+n1-ans;
	//printf("%lld ",sum);
		}
		//printf("\n");
		//long long int tot=(x*(x-1))/2;
		printf("Case %lld: %lld\n",k,sum);
	k++;
	}
	// your code goes here
	return 0;
}
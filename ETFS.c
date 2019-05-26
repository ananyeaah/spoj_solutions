#include <stdio.h>
long long int t,a,b,n,i,ans,c,n1;
int main(void) {
		scanf("%lld%lld",&a,&b);
		for(n=a;n<=b;n++)
		{
		ans=n;	n1=n;
			for(i=2;i*i<=n1;i++)
			{	if(n1%i==0)
				ans=ans-ans/i;
				while(n1%i==0)
				n1=n1/i;
			}
			if(n1>1)
			ans=(ans-ans/n1);
		printf("%lld\n",ans);
		}
	
	// your code goes here
	return 0;
}
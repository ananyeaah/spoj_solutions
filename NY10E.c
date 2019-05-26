#include <stdio.h>
long long int t,i,j,ans,n;
long long int fac(long long int n,long long int n1)
{long long int k,f=1;
	for(k=n1+1;k<=n;k++)
	f=f*k;
	return f;
}

int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld %lld",&i,&n);
		ans=fac(9+n,n)/fac(9,1);
		printf("%lld %lld\n",i,ans);
	}
	// your code goes here
	return 0;
}

#include <stdio.h>
long long int t,o,n;
long long int fun(long long int x)
{long long int k=0;
if(x==0)
return 0;
	while(x>0)
	{
		if(x&1)
		k++;
		x=x>>1;
	}
	return k;
}
int main(void) {
scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		o=fun(n);
		o=pow(2,o);
		printf("%lld %lld\n",n+1-o,o);
	}



	// your code goes here
	return 0;
}


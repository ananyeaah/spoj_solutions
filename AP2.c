#include <stdio.h>
long long int s,d,i,t,a,b,n,f;
long double am;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&a,&b,&s);
		am=(a+b)/2.0;
		n=(long long int)s/am;
		printf("%lld\n",n);
		d=(b-a)/(n-5);
		f=a-2*d;
		for(i=1;i<=n;i++)
		{
			printf("%lld ",f);
			f=f+d;
		}
		printf("\n");
	}
	// your code goes here
	return 0;
}



#include <stdio.h>
long long int t,x,a,n,s,sum;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&x,&a);
		s=(a+1)*(a-x);
		n=s/(a+1);
		sum=(n*(n-1))/2;
		printf("%lld\n",s-sum);
	}
	// your code goes here
	return 0;
}

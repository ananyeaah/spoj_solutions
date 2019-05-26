#include <stdio.h>
int t;
long long int a,b,c;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		printf("%lld\n",a*a-2*b);
	}
	// your code goes here
	return 0;
}
 
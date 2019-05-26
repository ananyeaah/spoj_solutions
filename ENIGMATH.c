#include <stdio.h>
long long int gcd(long long int,long long int);
long long int gcd(long long int a,long long int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}	
int main(void) {
	int t;
	long long int c,a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		c=gcd(a,b);
		printf("%lld %lld\n",b/c,a/c);
	}
	// your code goes here
	return 0;
}


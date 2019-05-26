#include <stdio.h>

int main(void) {
 long long n;
    while(scanf("%lld",&n)!=EOF)
    {
    	long long a=n%9;
    	a=a*a;
    	long long b=81*(n/9);
    	printf("%lld\n",a+b);
    	
    }

	// your code goes here
	return 0;
}

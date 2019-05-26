#include <stdio.h>
long long int t,i,x=0;
long long int n;
int main(void) 
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		x=x^n;
	}
	printf("%lld\n",x);
	
	// your code goes here
	return 0;
}
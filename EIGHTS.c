#include <stdio.h>
long long int n,i,t;

int main(void) {
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&i);
n=192+(i-1)*250;
printf("%lld\n",n);
}	// your code goes here
	return 0;
}

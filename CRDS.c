#include <stdio.h>
int t;
long long int n;
long long int s;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{s=0;
	scanf("%lld",&n);
	
	s=((n*(n+1))/2)*3-n;
		s=s%1000007;
		printf("%lld\n",s);
	}
	// your code goes here
	return 0;
}



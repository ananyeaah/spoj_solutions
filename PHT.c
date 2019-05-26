#include <stdio.h>
long long int i=1,ans,n,t;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans=sqrt(1+n)-1;
		printf("Case %lld: %lld\n",i,ans);
	i++;
	}
	// your code goes here
	return 0;
}

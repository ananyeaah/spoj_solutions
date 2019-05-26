#include <stdio.h>
long long int c=0,n,k,i,a[1000000],b[10000000];
int main(void) {
	scanf("%lld%lld",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		b[a[i]]=1;
	}
	for(i=0;i<n;i++)
	{
		if(b[a[i]+k]==1)
		c++;
	}
	printf("%lld\n",c);
	// your code goes here
	return 0;
}


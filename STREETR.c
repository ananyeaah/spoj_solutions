#include <stdio.h>
long long int n,i,a[1000010],d[1000010],g,s=0;
long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(void) {
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		if(i!=0)
		{
			d[i-1]=a[i]-a[i-1];
		}
	}
	g=d[0];
	for(i=1;i<n-1;i++)
	{
		g=gcd(d[i],g);
	}
	for(i=0;i<n-1;i++)
	{
		s=s+d[i]/g-1;
	}
	printf("%lld\n",s);
	
	// your code goes here
	return 0;
}

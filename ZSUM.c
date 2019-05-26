#include <stdio.h>
#define MOD 10000007
long long int s1,s2,s3,s4,n,k,s;
long long int power(long long int x, long long int y)
{x=x%MOD;
    if( y == 0)
        return 1;
    else if (y%2 == 0)
        return (power((x*x)%MOD, y/2)%MOD);
    else
        return ((x*(power(((x*x)%MOD), y/2))%MOD)%MOD);
}
int main(void) {
	scanf("%lld%lld",&n,&k);
	
	while(n!=0&&k!=0)
	{
		long long int s=0;
		s1=power(n-1,k)%MOD;
		s2=power(n-1,n-1)%MOD;
		s=(((2*s1)%MOD)+((2*s2)%MOD))%MOD;
		s3=power(n,k)%MOD;
		s4=power(n,n)%MOD;
		s=(s+s3%MOD+s4%MOD)%MOD;
		printf("%lld\n",s);
		scanf("%lld%lld",&n,&k);
	}
	// your code goes here
	//printf("%lld\n",power(20,100));
	return 0;
}

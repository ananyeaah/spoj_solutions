#include <stdio.h>
long int gcd(long int a,long int b)
{
	if(b==0)
	return a;
	else
	return(gcd(b,a%b));
}
long int t,a,i=1,b,c,x;
int main(void) {
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld%ld%ld",&a,&b,&c);
		x=gcd(b,a);
		if(c%x==0)
		printf("Case %ld: Yes\n",i);
		else
		printf("Case %ld: No\n",i);
		i++;
	}
	// your code goes here
	return 0;
}

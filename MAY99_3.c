#include <stdio.h>
long long int t,i,j,n,q,x,y,z,temp;
long long int gcd(long long int a,long long int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&x,&y,&z);
		
		if(x>y)
		{
			temp=x;
			x=y;
			y=temp;
		}
		if(z>x&&z>y){
		printf("NO\n");
		continue;}
		q=gcd(x,y);
			if(z%q==0)
			printf("YES\n");
			else
			printf("NO\n");
	}
	
	// your code goes here
	return 0;
}

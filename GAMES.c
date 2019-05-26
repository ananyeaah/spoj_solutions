#include <stdio.h>
long int t,n,l,g,p;
double x,k;
long int gcd(long int a,long int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
int main(void) {
	scanf("%ld",&t);
	while(t--)
	{l=0;
		scanf("%lf",&x);
//		n=(long int)x;
		k=(x-n);
//i=k;
		//printf("%lf\n",k);
		while(k!=(long int)k)
		{
			k=k*10;
			l++;
		}
			//printf("%lf %ld\n",k,l);
		p=pow(10,l);
		k=(long int)k;
		g=gcd(p,k);
		//printf("%ld\n",g);
		printf("%ld\n",p/g);
	}
	// your code goes here
	return 0;
}

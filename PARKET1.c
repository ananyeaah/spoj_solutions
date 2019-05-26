#include <stdio.h>
#include<math.h>
long long int t,r,b,i,p,x,y;
int main(void) {
	scanf("%lld%lld",&r,&b);
	t=r+b;
	p=(r+4)/2;
	y=(p)+(long long int)sqrt(p*p-4*t);
	y/=2;
	x=p-y;
	if(y>x)
	{
		printf("%lld %lld\n",y,x);
		
	}
	else
	printf("%lld %lld\n",x,y);
	
	// your code goes here
	return 0;
}

#include <stdio.h>
#include<math.h>
int main(void) {
long long int x,g,p,k,knock,t,a,d,add,n,k1;
scanf("%lld%lld%lld%lld",&g,&t,&a,&d);
	while((g!=-1)&&(t!=-1)&&(a!=-1)&&(d!=-1))
	{
		k=0;
	n=g*(t*(t-1))/2;
	knock=g*a+d;
	k1=knock;
	x=1;
	while(x<knock)
	{
		x=x<<1;
		k++;
	}
	add=x-knock;	
		n=n+(pow(2,k)-1);
		printf("%lld*%lld/%lld+%lld=%lld+%lld\n",g,a,t,d,n,add);
		scanf("%lld%lld%lld%lld",&g,&t,&a,&d);
	}
	// your code goes here
	return 0;
}



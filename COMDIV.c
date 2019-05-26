#include <stdio.h>
long int i,c,t,a,b,g,temp;
long int gcd(long int a1,long int b1)
{
if(b1==0)
return a1;
else
return gcd(b1,a1%b1);
}
int main(void) {
	scanf("%ld",&t);
	while(t--)
	{c=0;
		scanf("%ld %ld",&a,&b);
		if(a<b)
		{
			temp=a;
			a=b;
			b=temp;
		}
		
		g=gcd(a,b);
		for(i=1;i*i<=g;i++)
		{
			if(g%i==0)
			{
			c++;}
		}
		long int temp = sqrt(g);

    if(temp*temp == g)
		printf("%ld\n",2*c-1);
		else
		printf("%d\n",2*c);
	}
	// your code goes here
	return 0;
}

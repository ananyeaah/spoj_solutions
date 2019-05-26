#include <stdio.h>
long long int t,s1,s2,temp,x,g,y;
long long int gcd(long long int a,long long int b)
{
	while (b != 0) {
    temp = b;
    b = a % b;
    a = temp;
  }
  long long int g;
  g=a;
	return g;
}
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&s1,&s2);
		if(s1<s2)
		{
			temp=s1;
			s1=s2;
			s2=temp;
		}
		if(s1<0)
		x=-s1;
		else
		x=s1;
		if(s2<0)
		y=-s2;
		else
		y=s2;
		g=gcd(x,y);
		s1=s1/g;
		s2=s2/g;
		
		if(s1<0&&s2<0)
		{
			if(s1>s2)
			{s2=s2*-1;
			s1=s1*-1;
		}}
		printf("%lld\n",s1-s2);
	}
	// your code goes here
	return 0;
}


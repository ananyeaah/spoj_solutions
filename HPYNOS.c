#include <stdio.h>
long long int n;
int s=0,c=0;
int main(void) {
	scanf("%lld",&n);
	int c=hn(n);
	printf("%d\n",c);
	
	// your code goes here
	return 0;
}
int hn(long long int n)
{int r;
	if(s==1)
	return c;
	s=0;
	while(n>0)
	{
		r=n%10;
		s=s+r*r;
		n=n/10;
	}
	c++;
	if(c>15)
	return -1;
	else
	return(hn(s));
	
}

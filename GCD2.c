#include <stdio.h>
long long int gcd(long long int a,long long int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
long long int c,n,t,a,l,i,j,x,r;
char s[100000];
long long int b[100000];
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{c=0;
		scanf("%lld",&a);
		scanf("%s",&s);
		l=strlen(s);
		for(i=l-1;i>=0;i--)
		{b[i]=s[i]-'0';
		if(b[i]==0)
		c++;
		//n=n+pow(10,i)*b[i];
		//printf("%lld",n);
		}
		if(c==l&&a==0)
		{
			printf("0\n");
			continue;
		}
		if(a==0)
		{
			printf("%s\n",s);
			continue;
		}
		if(c==l)
		{
			printf("%lld\n",a);
			continue;
		}
		for(i=0;i<l;i++)
		{
			r=(b[i])%a;
		//printf("%lld\n",r);
			if(i!=(l-1));
			b[i+1]=b[i+1]+10*r;
		}
		//printf("%lld\n",r);
		x=gcd(r,a);
		printf("%lld\n",x);
	}
	// your code goes here
	return 0;
}

#include<math.h>
#include <stdio.h>
long long int n1,ans,ans1,x=1,c,d,m,n,t,i,j;
int fibo(long long int n)
{
	long long int a,b;
	a=5*n*n+4;
	b=5*n*n-4;
	
	long long int s1=sqrt(a);
	if(s1*s1==a)//||(s2*s2==b))
	return 1;
	if(b>=0){
	long long int s2=sqrt(b);
	if(s2*s2==b)
	return 1;}
	return 0;
}

int main(void) {
	scanf("%lld",&t);
	while(t--)
	{ans=1;
		scanf("%lld%lld",&n,&m);
		n1=n;
		for(i=2;i*i<=n;i++)
		{c=0;
			while(n%i==0)
			{
				n=n/i;
				c++;
			}
			if(c>0)
			{
				ans*=(pow(i,(c+1))-1)/(i-1);
			}
		}
		if(n>1)
		{
			ans*=(pow(n,2)-1)/(n-1);
		}
		ans=ans-n1;
		//printf("%lld\n",ans);
		ans=ans%m;
		ans1=1;
		for(i=2;i*i<=ans;i++)
		{c=0;
			while(ans%i==0)
			{
				ans=ans/i;
				c++;
			}
			if(c>0)
			{
				ans1*=c+1;
			}
		}
		if(ans>1)
		{
			ans1*=2;
		}
		ans1=ans1-1;
		printf("%lld\n",ans1);
		if(fibo(ans1)==1)
		printf("Case #%lld : YES.\n",x);
		else
		printf("Case #%lld : NO.\n",x);
		x++;
		
	}
	// your code goes here
	return 0;
}

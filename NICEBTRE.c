#include <stdio.h>
char s[10010];
long long int max(long long int a,long long int b)
{if(a>b)
return a;
else
return b;
	}
long long int l,r,t,ma,i=0;
long long int fun()
{
	if(s[i++]=='l')
	return 1;
	else
	{
		return max(fun(),fun())+1; 
	}
}
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{i=0;
		scanf("%s",&s);
		long long int ans=fun();
	printf("%lld\n",ans-1);
	}
	// your code goes here
	return 0;
}
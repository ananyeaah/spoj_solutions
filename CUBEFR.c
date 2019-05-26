#include <stdio.h>
long long int t,n,i,c,j;
int flag;
int main(void) {
scanf("%lld",&t);
	for(j=1;j<=t;j++)
	{c=0,flag=0;
		scanf("%lld",&n);
		for(i=2;i*i*i<=n;i++)
		{
			c++;
			if(n%(i*i*i)==0)
			flag=1;
		}
		if(flag==0)
		printf("Case %lld: %lld\n",j,n-c);
		else
	printf("Case %lld: Not Cube Free\n",j);
	}
	// your code goes here
	return 0;
}



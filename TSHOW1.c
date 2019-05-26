#include <stdio.h>
long long int n,i,t,j,a[10000000];
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n%2==0)
		a[0]=6;	
		else
		a[0]=5;
		i=1;
		while(n>0)
		{
			n=(n-1)/2;
			if(n<=0)
			break;
			if(n%2==0)
			a[i++]=6;
			else
			a[i++]=5;
		}
		for(j=i-1;j>=0;j--)
			printf("%lld",a[j]);
		printf("\n");
	}
	// your code goes here
	return 0;
}

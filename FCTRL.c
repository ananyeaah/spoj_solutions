#include<math.h>
#include <stdio.h>
long long int sum,i,t,n;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{sum=0;
		scanf("%lld",&n);
		for(i=1;(n/pow(5,i))>0;i++)
		{
			sum=sum+n/pow(5,i);
		}
		printf("%lld\n",sum);
	}
	// your code goes here
	return 0;
}


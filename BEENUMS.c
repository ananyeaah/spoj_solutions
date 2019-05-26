#include <stdio.h>
long long int sq,n,i,j;
int main(void) {
	scanf("%lld",&n);
	while(n!=-1)
	{
		n=n-1;
		if(n%3==0)
		{
		n=n/3;
		sq=sqrt(1+4*n);
		i=(sq-1)/2;
		//sq=sqrt(n);
		if((i>=0)&&(i*(i+1)==n))
		printf("Y\n");
		else
		printf("N\n");
		}
		else
		printf("N\n");
		scanf("%lld",&n);
	}

	// your code goes here
	return 0;
}

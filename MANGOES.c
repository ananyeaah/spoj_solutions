#include <stdio.h>
long long int s=0,t,n,i,j,k,t1,temp,ans1,ans2,ans3;

int main(void) {
	scanf("%lld",&t);
	while(t--)
	{s=0;
		scanf("%lld",&n);
		if(n%2==0)
		t1=n-2;
		else
		t1=n-1;
		temp=(t1/2)*(t1/2);
		printf("%lld\n",temp%n);
	}
	// your code goes here
	return 0;
}

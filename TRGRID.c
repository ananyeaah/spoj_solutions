#include <stdio.h>
long long int m,n;
int t,i;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&m,&n);
		if((m<=n)&&(m%2==0))
		printf("L\n");
		else if((m<=n)&&(m%2!=0))
		printf("R\n");
		else if((m>n)&&(n%2==0))
		printf("U\n");
		else if((m>n)&&(n%2!=0))
		printf("D\n");
	}
	// your code goes here
	return 0;
}


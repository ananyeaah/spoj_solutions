#include <stdio.h>
long long int m,n,t,p;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		p=(m-n)%4;
		if(p==1)
		printf("3\n");
		else if(p==2)
		printf("9\n");
		else if(p==3)
		printf("7\n");
		else
		printf("1\n");
		
	}
	// your code goes here
	return 0;
}

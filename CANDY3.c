#include <stdio.h>

int main(void) {
int t;
	long long int i,s=0,n,temp;
	scanf("%lld",&t);
	while(t--)
	{s=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&temp);
		s=(s+temp);
		}
	if(s%n==0)
	printf("YES\n");
	else
	printf("NO\n");
	
	}
	// your code goes here
	return 0;
}



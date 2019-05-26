#include <stdio.h>
long long int i,j=1,s,t,n,e,min;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{s=0;min=100000;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&e);
			s=s+e;
			if(s<min)
			min=s;
		}
		if(min<0)
		printf("Scenario #%lld: %lld\n",j,(min*-1)+1);
		else
		printf("Scenario #%lld: 1\n",j);
	j++;	
	}
	
	// your code goes here
	return 0;
}

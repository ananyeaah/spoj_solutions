#include <stdio.h>
int t;
long int s,i,n,a[1000000];
int main(void) {
	scanf("%d",&t);
	while(t--)
	{s=0;
		scanf("%ld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
			s=s+a[i];
		}
		if(s%n==0)
		printf("%ld\n",n);
		else
		printf("%ld\n",n-1);
		
	}
	// your code goes here
	return 0;
}

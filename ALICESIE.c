#include <stdio.h>
long int t,n,ans;
int main(void) {
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&n);
		if(n%2==0)
		{
			ans=n/2;
		}
		else 
		ans=n/2+1;
		printf("%ld\n",ans);
	}
	// your code goes here
	return 0;
}

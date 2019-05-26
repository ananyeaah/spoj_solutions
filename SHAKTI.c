#include <stdio.h>
long int t,n;
int main(void) {
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&n);
		if(n%2==0)
		printf("Thankyou Shaktiman\n");
		else
		printf("Sorry Shaktiman\n");
	}
	// your code goes here
	return 0;
}

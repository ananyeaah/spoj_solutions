#include <stdio.h>
long int n,t;

int main(void) {
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&n);
		if(n-2>=0)
		printf("%d\n",n-2);
		else printf("0\n");
	}
	
	
	
	// your code goes here
	return 0;
}

#include <stdio.h>

long int i,n;

int main(void) {
scanf("%ld",&n);
while(n!=0)
{i=0;
while(n>1)	
	{
		n=n/2;
		i++;
		
	}
	printf("%ld\n",i);
scanf("%ld",&n);
}
	// your code goes here
	return 0;
}
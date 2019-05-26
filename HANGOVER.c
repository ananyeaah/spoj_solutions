#include <stdio.h>

int main(void) {
	float c,l=0.0;
int i;
	scanf("%f",&c);
	while(c!=0.00)
	{l=0;
		for(i=1;l<c;i++)
		{
			l=l+(float)1/(i+1);
		}
		printf("%d card(s)\n",i-1);
		
	scanf("%f",&c);	
	}

	// your code goes here
	return 0;
}

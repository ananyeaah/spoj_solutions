#include <stdio.h>

int main(void) {
	int t,n;
	double s;
	scanf("%d",&t);
	while(t--)
	{
        scanf("%d",&n);
	s=(double)n/(n+1);	
	printf("%.8f\n",s);
	
	}
	
	// your code goes here
	return 0;
}




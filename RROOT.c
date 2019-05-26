#include <stdio.h>
int t;
double s;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf",&s);
		printf("%0.6f\n",1-1/(3*sqrt(s/2)));
	}
	// your code goes here
	return 0;
}

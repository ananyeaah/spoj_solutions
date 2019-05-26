#include <stdio.h>
int t,r;
double s;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&r);
		s=(8.0*(2.0-pow(2,0.5))*r*r*r);
		printf("%0.4lf\n",s);
	}
	// your code goes here
	return 0;
}


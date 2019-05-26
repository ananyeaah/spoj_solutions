#include <stdio.h>
int t,i=1;
long int r;
double s;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&r);
		s=(double)(4.0*r*r+0.5-0.25);
		printf("Case %d: %.2lf\n",i,s);
		i++;
	}
	// your code goes here
	return 0;
}

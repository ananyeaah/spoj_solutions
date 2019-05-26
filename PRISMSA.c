#include <stdio.h>
long int t,v;
int main(void) {
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld",&v);
		double a=pow(4.0*v,1.0/3.0);
		double h=4.0*v/(a*a*pow(3.0,0.5));
		double s=a*a*pow(3.0,0.5)/2+3*h*a;
		printf("%.10lf\n",s);
	}
	// your code goes here
	return 0;
}

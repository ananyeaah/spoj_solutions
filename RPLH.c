#include <stdio.h>
int t,ta,sp,i=1;
double r,x,r1;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&ta,&sp);
		r=((9.806*ta)/(sp*sp));
		if((r>=-1)&&(r<=1))
		{r1=asin(r)/2.0;
			x=(180.0*r1)/(2.0*acos(0.0));
		printf("Scenario #%d: %.2f\n",i,x);}
		else
		printf("Scenario #%d: -1\n",i);
		i++;
	}
	// your code goes here
	return 0;
}
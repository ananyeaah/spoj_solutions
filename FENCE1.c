#include <stdio.h>
#define pi 3.14159
 
int main(void) {
	int l;
	double r,a;
	scanf("%d",&l);
	while(l)
	{
r=l/(pi);
a=pi*r*r/2.0;
printf("%.2f\n",a);
	scanf("%d",&l);
	}
 
	// your code goes here
	return 0;
}
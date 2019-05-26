#include <stdio.h>
#include<math.h>
int t,n;
double a,b,c,d,s,sq,s1;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=(a+b+c+d)/2.0;
		s1=(s-a)*(s-b)*(s-c)*(s-d);
		sq=sqrt(s1);
		printf("%.2lf\n",sq);
	}
	
	// your code goes here
	return 0;
}

#include <stdio.h>
#define p 3.14159265358979323846
int r,n;
double s;
int main(void) {
	scanf("%d%d",&r,&n);
	while((r!=0)&&(n!=0))
	{
		s=(double)r/sin(p/(2*n));
		printf("%.2lf\n",s);
		
		
			scanf("%d%d",&r,&n);
	}
	
	// your code goes here
	return 0;
}


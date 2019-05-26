#include <stdio.h>
double s,k;
int i=1,c,po,p,t,p1;
int main(void) {
scanf("%d",&c);
	while(c--)
	{
		scanf("%d%d%d%d",&po,&p1,&t,&p);
		k=(double)(log((double)p1/(double)po))/t;
	printf("Scenario #%d: %.2lf\n",i,(double)log((double)p/po)/k);
	
	i++;
	}
	// your code goes here
	return 0;
}


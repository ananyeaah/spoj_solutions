#include <stdio.h>
#define p 3.14159265358979323846
int t,v,k1,k2;
double s,s1,ans;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&v,&k1,&k2);
		if(k2!=0)
		{
			s1=-4.0*(double)k1/(double)k2;
			s=(double)atan(s1);
		s=s/2.0;}
		else
		s=p/4.0;
		while(s<=0)
		{
			s=s+p/2.0;
		}
		
		ans=v*v*(sin(2.0*s)*k1+sin(s)*sin(s)*k2/2.0)/10.0;
		printf("%0.3lf %0.3lf\n",s,ans);
	}
}
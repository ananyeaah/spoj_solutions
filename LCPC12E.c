#include <stdio.h>
 long double ans,a,temp,b,c,d,l,r,R;
long long int t,i=1;
int main() {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%llf%llf%llf%llf%llf%llf",&a,&b,&c,&d,&r,&l);
		d=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		R=sqrt(2)*l/2.0;
		if(R<r)
		{
			temp=R;
			R=r;
			r=temp;
		}
		if(d<r+R&&d>R-r)
		{ans=sqrt((-d+r-R)*(-d-r+R)*(-d+r+R)*(d+r+R))/(d);
		printf("%lld. %.3llf\n",i,ans);}
		else
		printf("%lld. No problem\n",i);
	i++;
	}// your code goes here
	return 0;
}

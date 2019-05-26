#include <stdio.h>
long long int i,j,dif,t,d,n,m,a[1000000],b[1000000];
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		scanf("%lld",&m);
		for(i=0;i<m;i++)
		{
			scanf("%lld",&b[i]);
		}
		d=100000000;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i]==b[j])
				{
					d=0;
					break;
				}
				if(a[i]<b[j])
					dif=b[j]-a[i];
				else
				dif=a[i]-b[j];
				//printf("%lld\n",dif);
				if(dif<d)
				{
					d=dif;
			}}}
						
		printf("%lld\n",d);
	}
	// your code goes here
	return 0;
}

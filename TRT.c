#include <stdio.h>
#include<math.h>
#define max(a,b) (a>b?a:b)
long long int n,a[2010],i,ans,b[2010][2010];
long long int fun(long long low,long long high)
{
	if(low>high)
	return 0;
	if(b[low][high])
	return b[low][high];
	long long int y=n-(high-low+1)+1;
	return b[low][high]=(max((fun(low+1,high))+y*a[low],(fun(low,high-1))+y*a[high]));
}


int main(void) {
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
	ans=fun(0,n);
	printf("%lld\n",ans);
	// your code goes here
	return 0;
}

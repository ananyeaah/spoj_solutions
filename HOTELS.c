#include <stdio.h>
long long int m,n,v[300010],i,j,st=0,ans=0,ma=0;
int main(void) {
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&v[i]);
	}
//	m=v[0];
	for(i=0;i<n;i++)
	{
		ma=ma+v[i];
		if(ma==m)
		{
			ans=m;
			break;
		}
		while(ma>m)
		{
			ma=ma-v[st];
			if(ma==m)
			{
				ans=m;
				break;
			}
			st++;
		}
		if(ans<ma&&ma<m)
		{
			ans=ma;
		}
		if(ma==m)
			{
				ans=m;
				break;
			}
	}
	printf("%lld\n",ans);
	// your code goes here
	return 0;
}

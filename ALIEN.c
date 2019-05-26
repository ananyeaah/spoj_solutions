#include <stdio.h>
int ans=0,ans1=0,m,n,v[300001],i,j,st=0,mp=0,mn=0,t;
int main(void) {
	scanf("%d",&t);
while(t--){
	ans=1000005;
	st=0,mp=0,mn=0,ans1=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&v[i]);
	}
	for(i=0;i<n;i++)
	{
		//mp=mp+v[i];
		mp=mp+v[i];
		mn++;
		if((mp<=m&&mn>ans1)||(mn==ans1&&mp<ans))
		{
			ans1=mn;
			ans=mp;
		}
		else
		{
			while(mp>m)
			{
				mp=mp-v[st];
				mn--;
				st++;
			}
		}
		if((mp<=m&&mn>ans1)||(mn==ans1&&mp<ans))
		{
			ans1=mn;
			ans=mp;
		}
	}
	printf("%d %d\n",ans,ans1);
}	// your code goes here
	return 0;
}
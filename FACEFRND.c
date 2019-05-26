#include <stdio.h>
long long int p,i,j,l,final[1000000],flag1,m,ans,t,k,flag,a[1000000],b[10000000],c[10000000];
int main(void) {
scanf("%lld",&t);
i=0;l=0;ans=0;
while(t--)
{
	scanf("%lld",&c[i]);
	scanf("%lld",&a[i]);
	for(j=0;j<a[i];j++)
	{
		scanf("%lld",&b[l]);
	l++;
	}
	i++;
}p=0;
for(k=0;k<l;k++)
{flag=0;
	for(j=0;j<i;j++)
	{
		if(b[k]==c[j])
		{
			flag=1;
		}
	}
	if(flag==0)
	{flag1=0;
		for(m=0;m<p;m++)
		{
			if(final[m]==b[k])
			flag1=1;
		}
		if(k==0||flag1==0){
		ans++;
	final[p++]=b[k];}
	}
}
printf("%lld\n",ans);
	// your code goes here
	return 0;
}

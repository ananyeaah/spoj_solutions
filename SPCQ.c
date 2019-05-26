#include <stdio.h>
long long int t,n,i,j,s,temp,ans;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=n;;i++)
		{
			temp=i;s=0;
			while(temp>0)
			{
				s=s+temp%10;
				temp=temp/10;
			}
			if(i%s==0)
			{ans=i;
				break;
			}
		}
		printf("%lld\n",ans);
	}
	// your code goes here
	return 0;
}

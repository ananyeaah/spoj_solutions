#include <stdio.h>
long long int flag,t,n,a[1000000],i,j,max,m,c;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		max=m=a[0];
		for(i=1;i<n;i++)
		{
			m=(m+a[i]>a[i])?m+a[i]:a[i];
			max=(max>m)?max:m;
			
		}
		c=0;
		m=a[0];
		if(m==max)
		c++;
		flag=0;
		for(i=1;i<n;i++)
		{
			if(m+a[i]>a[i])
			{
				m=a[i]+m;
			}
			else if(m+a[i]<a[i])
			{
				m=a[i];
				flag=0;
			}
			else
			{m=m+a[i];
				flag++;
			}
			if(m==max&&flag==0)
			c++;
			if(max==m&&flag>0)
			c=c+(flag+1);
		}
		printf("%lld %lld\n",max,c);
		
	}
	// your code goes here
	return 0;
}

#include <stdio.h>
long long int a[1010],n,i,s[1010],c,k,flag;
int main(void) {
	scanf("%lld",&n);
	while(n!=0)
	{c=1;k=0;flag=0;
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
		{
				while(k>0&&s[k-1]==c)
				{
					k--;
					c++;
					//continue;
				}
			
			if(a[i]==c)
			{
				c++;
			}
			else
			{
				s[k++]=a[i];
			}
		}
		
		for(i=k-1;i>=0;i--)
		{
			if(s[i]!=c)
			flag=1;
			else
			c++;
		}
		if(flag==1)
		printf("no\n");
		else
		printf("yes\n");
	scanf("%lld",&n);
	}
	// your code goes here
	return 0;
}

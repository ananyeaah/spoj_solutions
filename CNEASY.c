#include<math.h>
#include <stdio.h>
int n,i,j,t,ans;
char s[45];
double temp,min,tem,a[10000];
int main(void) 
{
	scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		scanf("%s %lf",&s,&a[i]);
			
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		min=a[n-1]-a[0];
		for(i=0;i<n-1;i++)
		{
			tem=(360.0-a[i+1]+a[i]);
			if(tem<min)
			min=tem;
		}
		 
		ans = (int)(ceil( min*12.0));
		printf("%d\n",ans);
	}
	
	// your code goes here
	return 0;
}
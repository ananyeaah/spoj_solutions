#include <stdio.h>
long int t,i,j,n,c,temp,a[1000];
int main(void) {
	scanf("%ld",&t);
	while(t--)
	{c=0;
		scanf("%ld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a[i]);
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
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if((a[i]!=0)&&(a[j]!=0))
				{
				if(((a[i]/a[j]==2)&&(a[i]%a[j]==0))||((a[j]/a[i]==2)&&(a[j]%a[i]==0)))
				{
					c++;
					a[j]=0;
					break;
				}}
			}
		}
		printf("%ld\n",c);
	}
	// your code goes here
	return 0;
}

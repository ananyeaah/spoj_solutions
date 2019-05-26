#include <stdio.h>
int t,n,a[1001],b[1001],i,j,k,s=0,temp;
int main(void) {
scanf("%d",&t);
	while(t--)
	{s=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		for(i=0;i<n;i++)
		scanf("%d",&b[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
				if(b[i]<b[j])
				{
					temp=b[i];
					b[i]=b[j];
					b[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++)
		s=s+a[i]*b[i];
		printf("%d\n",s);
	}
	// your code goes here
	return 0;
}

#include <stdio.h>
long long int i,j,k,a[100],temp,c=1;
int main(void) {
	while(scanf("%lld%lld%lld%lld",&a[0],&a[1],&a[2],&a[3])==4)
	{		for(i=0;i<4;i++)
		{
			for(j=i+1;j<4;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		printf("Case %lld: %lld\n",c,a[0]+a[1]);
	c++;
	}
	// your code goes here
	return 0;
}

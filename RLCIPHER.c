#include <stdio.h>
long long int t,i,a[100000],x,y1,y,ans,n;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			if((a[i]>=7)||(a[i]==0)||(a[i]==4)||(a[i]==3)||(a[i]==6))
			y=-4;
			if((a[i]==1)||(a[i]==5))
			y=-3;
			if(a[i]==2)
			y=-2;
			if(a[i]<0)
			printf("%lld",a[i]);
			else 
			printf("%lld",y);
			if(i!=n-1)
			printf(" ");
		}
		printf("\n");
	}
	// your code goes here
	return 0;
}



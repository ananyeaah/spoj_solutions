#include <stdio.h>
long long int n,i,j,k=1,s,s1,a[1010][1010];
int main(void) {
	scanf("%lld",&n);
	while(n!=0)
	{s=s1=0;
		long long r[10010]={0};
		long long c[10010]={0};
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lld",&a[i][j]);
				s=s+a[i][j];
				r[i]=r[i]+a[i][j];
			}
		}
		for(j=0;j<n;j++)
		{
			for(i=0;i<n;i++)
			{
				c[j]=c[j]+a[i][j];
				
			}
			if(c[j]-r[j]>0)
			{
				s1=s1+c[j]-r[j];
			}
		}
		printf("%lld. %lld %lld\n",k,s,s1);
		k++;
		scanf("%lld",&n);
	}
	// your code goes here
	return 0;
}

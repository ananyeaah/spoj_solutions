#define max(x,y) x>y?x:y
#include <stdio.h>
int fun(int a[],int n)
{
	if(n==1)
	return a[0];
	int n1=n/2;
	int n2=n-n/2;
	return max(fun(&a[0],n/2),fun(&a[n/2],n2));
}
int n,k,a[1000010],i;
int main(void) {
	scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		scanf("%d",&k);
		int *p;
		p=a;
		for(i=0;i<=n-k;i++)
		{
			int ans=fun(p+i,k);
			if(i!=n-k)
			printf("%d ",ans);
			else
			printf("%d",ans);
		}
		printf("\n");
	// your code goes here
	return 0;
}

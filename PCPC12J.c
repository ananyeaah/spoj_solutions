#include <stdio.h>

int t,a[1000000],n,i;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		int f[100000]={0};
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		
			scanf("%d",&a[i]);
			f[a[i]]++;
		}
		int max=0;
		int se[1000],se1[1000];
		int ma=-1;
		int c=0;
		int flag=0;
		for(i=0;i<101;i++)
		{
			if(f[i]==0)
			continue;
			if(f[i]>max&&f[i]%i==0)
			{
				flag=1;
				max=f[i];
				ma=i;
				se1[c]=f[i];
				se[c++]=i;
			}
		}
		
		printf("%d\n",ma);
	}
	return 0;
}
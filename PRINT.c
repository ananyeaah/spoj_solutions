#include <stdio.h>

int main(void) {
	int t,flag;
	long long int m,n,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&m,&n);
		for(i=m;i<=n;i++)
		{flag=0;
			for(j=2;j*j<=i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if((flag==0)&&(i!=1))
			printf("%lld\n",i);
		}
	printf("\n");
	}
	// your code goes here
	return 0;
}

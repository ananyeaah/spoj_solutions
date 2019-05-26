#include<stdio.h>
int check[200010]={0};	//we need to find primes upto 32000 i.e sqrt(1000000000)
int prime[200010];
int k;
void seive()
{
	int temp,i;
	check[0]=check[1]=1;
	for(i=3;i*i<=2000;i+=2)
	{
		if(check[i]==0)
		{
			temp=i*i;
			while(temp<=2000)
			{
				check[temp]=1;
				temp+=2*i;
			}
		}
	}
	prime[0]=2; k=1;
	for(i=3;i<=2000;i+=2)
	{
		if(check[i]==0)
		{
			prime[k]=i;
			k++;
 
		}
	}
	k--;
}
int main(void) {
	seive();
int t,a,b,n,di,i,j,k;
scanf("%d",&t);
	while(t--)
	{int ans=0;
		scanf("%d%d%d",&a,&b,&n);
		for(i=a;i<=b;i++)
		{
			int di=0;k=0;
			for(j=prime[0];j<=i;j=prime[++k])
			{
				if(i%j==0)
				{
					di++;
				}
			}
			if(di==n)
			ans++;
		}
		printf("%d\n",ans);
	}
	// your code goes here
	return 0;
}

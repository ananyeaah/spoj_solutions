#include <stdio.h>

int main(void) {
int c,t,l,a=1;
double i,j,k,m,n,k1;
long long int ans;
	scanf("%d",&t);
	while(t--)
	{l=0;
		scanf("%lf%lf%lf",&n,&m,&k1);
		ans=n*m*k1-1;
		i=n;
		j=m;
		k=k1;
		while(i>1)
		{
			i=i/2;
			l++;
		}
			while(j>1)
		{
			j=j/2;
			l++;
		}
			while(k>1)
		{
			k=k/2;
			l++;
		}
		printf("Case #%d: %lld %d\n",a,ans,l);
		a++;
	}

	// your code goes here
	return 0;
}

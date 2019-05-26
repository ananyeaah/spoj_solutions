#include <stdio.h>
long long int dif[10000],xi[10000],xf[10000],n;
long long int ans,i,j,fac,sum;
long long int j;
long long int fact(long long int n)
{long long int f=1;    
for(j=1;j<=n;j++)
	f=f*j;
return f;
     
}    
	
int main(void) {
	scanf("%lld",&n);
	while(n!=0)
	{sum=0;fac=1;
		for(i=0;i<n;i++)
		scanf("%lld",&xi[i]);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&xf[i]);
			
		}
		for(i=0;i<n;i++)
		{
		dif[i]=xf[i]-xi[i];
//printf("%lld\n",dif[i]);
		sum=sum+dif[i];
//printf("%lld\n",sum);
		fac=fac*fact(dif[i]);

}
ans=fact(sum)/fac;
printf("%lld\n",ans);
scanf("%lld",&n);
	}
	// your code goes here
	return 0;
}

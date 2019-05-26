#include <stdio.h>
#include<math.h>
long long int ans,p,t,i,j,n,c=1,flag,a[1000000],d;
int main(void) 
{
	scanf("%lld",&t);
	while(t--)
	{
		p=1;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			p=p*a[i];
		}
		p++;
		if(prime(p)==1)
		{
			printf("Case #%lld: %lld\n",c,p);
		}
		else
		{
			long long div=2, ans = 0, maxFact;
    while(p!=0){
        if(p % div !=0)
            div = div + 1;
        else{
            maxFact  = p;
            p = p / div;

            if(p == 1){
               // printf("%d is the largest prime factor !",maxFact);
printf("Case #%lld: %lld\n",c,maxFact);               
 ans = 1;
                break;
            }
        }
    }						
	



			
		}
	c++;
	}
	// your code goes here
	return 0;
}
int prime(long long int x)
{flag=0;
	for(i=2;i*i<=x;i++)
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	return 1;
	else
	return 0;
}
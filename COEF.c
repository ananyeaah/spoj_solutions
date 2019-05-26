#include <stdio.h>
int n,k,f,i,ans,num;

int main(void) {
	while(scanf("%d%d",&n,&k)==2)
	{f=1;
		for(i=0;i<k;i++)
		{
		scanf("%d",&num);
		f=f*fac(num);
		}
		ans=fac(n)/f;
		printf("%d\n",ans);
	}
	// your code goes here
	return 0;
}
int fac(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * fac(n-1));
}
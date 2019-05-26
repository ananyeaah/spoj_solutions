#include <stdio.h>
int x,k,v[100010],i,j,res[100010];
int main(void) {
	scanf("%d%d",&x,&k);
	for(i=0;i<k;i++){
		scanf("%d",&v[i]);
		if(i>0)
		v[i]=v[i-1]+v[i];
		}
		res[0]=1;
		for(i=1;i<=x;i++)
		{
			for(j=0;j<k;j++)
			{
				if(v[j]<=i)
				{
					if(res[i-v[j]])
					{
						res[i]=1;
					}
				}
			}
		}
		if(res[x]==1)
		printf("YES\n");
		else
		printf("NO\n");
	// your code goes here
	return 0;
}

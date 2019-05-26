#include <stdio.h>
int t,x1[10000],l,count=0,x2[10000],y1[10000],y2[10000],ch,n,q,i,j,k=0;
double pos[10000];

int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%d %d %d %d",&x1[i],&y1[i],&x2[i],&y2[i]);
		scanf("%d",&q);
		for(i=0;i<q;i++)
 		{count=0;
			scanf("%d",&ch);
			if(ch==0)
			{scanf("%lf",&pos[k]);
			
				for(j=0;j<n;j++)
				{
					if((pos[k]>=x1[j])&&(pos[k]<=x2[j]))
					count++;
				}
			printf("%d\n",count);
			k++;
			}
			else
			{
				
			scanf("%d %d %d %d",&x1[n],&y1[n],&x2[n],&y2[n]);
			n++;}
		}
		
		
	}
	// your code goes here
	return 0;
}

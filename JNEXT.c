#include <stdio.h>
int t,n,a[10000000],b[10000000],index,i,j,flag,temp;
int cmpfunc (const void * a, const void * b)
{
return ( *(int*)a - *(int*)b );
}
int main(void) {
	scanf("%d",&t);
	while(t--)
	{flag=0;j=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=n-1;i>0;i--)
		{b[j]=a[i];
			if((a[i]>a[i-1])&&(flag==0))
			{
				flag=1;
				index=i-1;
				break;
			}j++;
		}
		if(flag==0)
		printf("-1\n");
		else
		{
			qsort(b, j+1, sizeof(int), cmpfunc);
		for(i=0;i<=j;i++)
		{
			if(a[index]<b[i])
			{
				temp=a[index];
				a[index]=b[i];
				b[i]=temp;
				break;
			}
		}
		//qsort(b, j+1, sizeof(int), cmpfunc);
		for(i=0;i<=index;i++)
		printf("%d",a[i]);
		for(i=0;i<n-index-1;i++)
		printf("%d",b[i]);
		printf("\n");
		}
		
	}
	// your code goes here
	return 0;
}

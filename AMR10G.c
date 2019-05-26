#include <stdio.h>
long int t,n,k,i,j,a[1000000],k,min;
int cmpfunc (const void * a, const void * b)
{
    return( *(long int*)a - *(long int*)b  );
 
}

int main(void) {
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%ld%ld",&n,&k);
		for(i=0;i<n;i++)
		scanf("%ld",&a[i]);
		if(k==1)
		{
			printf("0\n");
			continue;
		}
		qsort(a, n, sizeof(a[0]), cmpfunc);
	//	for(i=0;i<n;i++)
	//	printf("%ld\n",a[i]);
		min=a[k-1]-a[0];
		for(i=1;i+k<=n;i++)
		{
			
			if(a[i+k-1]-a[i]<min)
			min=a[i+k-1]-a[i];
		}
		printf("%ld\n",min);
	}
	// your code goes here
	return 0;
}

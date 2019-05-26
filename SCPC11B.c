#include <stdio.h>
int n,i,j,temp,flag=0;;
int main(void) {
	scanf("%d",&n);
	while(n!=0)
	{flag=0;
		int a[100000];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
		if(a[0]>200)flag=1;
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]-a[i]>200)
		{flag=1;break;}
	}
	if((1422-a[n-1])*2>200)
	flag=1;
	
	if(flag==1)
	printf("IMPOSSIBLE\n");
	else
	printf("POSSIBLE\n");
	scanf("%d",&n);	
	}
	// your code goes here
	return 0;
}

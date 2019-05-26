#include <stdio.h>
long int s,n,t,temp,flag,p;
long long int sum,ans;
long int f,i,a[1000000],j,k=1;
int main(void) 
{
	scanf("%ld",&t);
	while(t--)
	{flag=0;ans=0;sum=0;p=1;
		scanf("%ld%ld",&s,&f);
		for(i=0;i<f;i++)
		scanf("%ld",&a[i]);
		for(i=0;i<f;i++)
		{
			for(j=i+1;j<f;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
				
			}
			ans=ans+a[i];
			
			if(ans>=s)
			{
				flag=1;break;
			}
			p++;
		}
		if(flag==1)
		printf("Scenario #%ld:\n%ld\n\n",k,p);
		else
		printf("Scenario #%ld:\nimpossible\n\n",k);
	k++;}
	// your code goes here
	return 0;
}



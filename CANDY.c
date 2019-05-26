#include <stdio.h>
int t,n,i,s,sum,avr,c,n1;
int main(void) {
	scanf("%d",&n);
	while(n!=-1)
	{int a[100000];
		sum=0;
		s=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			s=s+a[i];
		}
		if(s%n==0)
		{c=0;
			avr=s/n;
			for(i=0;i<n;i++)
			{if(avr<a[i])
			c=c+a[i]-avr;}
		printf("%d\n",c);
		}
		else
		printf("-1\n");
	scanf("%d\n",&n);	
	}
	// your code goes here
	return 0;
}

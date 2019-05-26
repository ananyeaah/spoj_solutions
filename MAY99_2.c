#include <stdio.h>
long long int t,n,i=0,j,r;
char a[10000000];
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{i=0;
		scanf("%lld",&n);
		while(n>0)
		{
			r=n%10;
			if(r==1||r==6)
			a[i]='m';
			else if(r==2||r==7)
			a[i]='a';
			else if(r==3||r==8)
			a[i]='n';
			else if(r==4||r==9)
			a[i]='k';
			else if(r==5||r==0)
			a[i]='u';
			i++;
			n=(n-1)/5;
			
			
		}
		for(j=i-1;j>=0;j--)
		printf("%c",a[j]);
		printf("\n");
	}
	// your code goes here
	return 0;
}

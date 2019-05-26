#include <stdio.h>
int t,n,x,i,j,y;
char s[10000];
int main(void) {
	scanf("%d",&t);
	while(t--)
	{x=0;y=0;
scanf("%d",&n);
		for(i=0;i<n;i++)
{
		scanf("%s",&s);
		
			if(s[0]=='l')
			x++;
		}
		if(x%2==0)
		printf("hhb\n");
		else
		printf("lxh\n");
	}

	// your code goes here
	return 0;
}

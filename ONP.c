#include <stdio.h>
char a[500],s[500],c[500];
int t,i,l,m,x,p,j,k,q;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{p=0;
		scanf("%s",&s);
		l=strlen(s);
		x=0;
		for(i=0;s[i];i++)
		{
			if(s[i]>='a'&&s[i]<='z')
			{
				printf("%c",s[i]);
			}
			if(s[i]=='^'||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/')
			{
				a[p++]=s[i];
			//	printf("%c",s[i]);
			}
			if(s[i]==')')
			{p=p-1;
				printf("%c",a[p]);
			}
		}
		printf("\n");
	}

	// your code goes here
	return 0;
}

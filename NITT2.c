#include <stdio.h>
long long int t,n,i,l,s1,su,c1,c2,j,b[100000];
char s[10000000];
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%s",s);su=0;s1=0;
		for(i=0;s[i]!='\0';i++)
		{
			su=su+s[i]-'0';
		}l=strlen(s);
		j=-1;
		n=(s[l-2]-'0')*10+(s[l-1]-'0');
		b[0]=1;
		b[1]=3;
		b[2]=2;
		b[3]=6;
		b[4]=4;s1=0;
		b[5]=5;
		for(i=strlen(s)-1;i>=0;i--)
		{
			s1=s1+b[++j]*(s[i]-'0');
			if(j==5)
			j=-1;
		}c1=0;c2=0;
		if(n%4==0&&s1%7==0&&su%9==0)
		{c1=1;
		}
		if((n==0||n==25||n==50||n==75)&&(su%3==0)&&(s1%7==0))
		c2=1;
		if(c1==1)
		printf("Yes ");
		else
		printf("No ");
		if(c2==1)
		printf("Yes\n");
		else
		printf("No\n");
		
	}
	// your code goes here
	return 0;
}

#include <stdio.h>
char s[100000];
char ch,ch1;
int i,flag=1;
int main(void)
{
	gets(s);
	while(s[0]!='*')
	{
	
	ch=s[0];
flag=0;
		if(ch>=65&&ch<=90)
		ch1=(char)(s[0]+32);
		if(ch>=97&&ch<=122)
		ch1=(char)(s[0]-32);
	i=0;
			while(s[i]!='\0')
			{
				if((s[i]==' ')&&(s[i+1]!=' '))
					if((s[i+1]!=ch)&&(s[i+1]!=ch1))
						{flag=1;break;}
					i++;
			}
			if(flag==0)
			printf("Y\n");
			else
		printf("N\n");
	gets(s);
	}
// your code goes here
	return 0;
}



#include <stdio.h>
int t,k,i,k1;
char s[100009],ch;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		scanf("%s",&s);
		for(i=0;s[i]!='\0';i++)
		{ch=s[i];
			if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
			{
				if(k<26)
				{
					
					if(ch>=65&&ch<=90)
					ch=65+(ch-65+k)%26;
					if(ch<=122&&ch>=97)
					ch=97+(ch-97+k)%26;
					s[i]=ch;
				}
				else
				{k1=k%26;
						if(ch>=65&&ch<=90)
				{	ch=65+((ch-65+k1)%26);
				
				}
					if(ch<=122&&ch>=97)
					{ch=97+((ch-97+k1)%26);
				
				}
				if(ch>=97)
				s[i]=ch-32;
				else
				s[i]=ch+32;
				}
			}
			else
			s[i]=32;
		}
		printf("%s\n",s);
	}
	// your code goes here
	return 0;
}

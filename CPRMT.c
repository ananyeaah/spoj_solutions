#include <stdio.h>
int i,j,c;
char s1[10000],s2[10000];
int main(void) {
	while(scanf("%s%s",&s1,&s2)==2)
	{
		int a[1000]={0};
		int b[1000]={0};
		for(i=0;s1[i]!='\0';i++)
		{
			a[s1[i]-97]++;
			
		}
		for(i=0;s2[i]!='\0';i++)
		{
			b[s2[i]-97]++;
			
		}
		for(i=0;i<26;i++)
		{
		if(a[i]>0&&b[i]>0)
		{	if(a[i]==b[i])
			{
				for(j=0;j<a[i];j++)
				printf("%c",i+97);
			}
				if(a[i]<b[i])
			{
				for(j=0;j<a[i];j++)
				printf("%c",i+97);
			}
				if(a[i]>b[i])
			{
				for(j=0;j<b[i];j++)
				printf("%c",i+97);
			}
		}
		}
		printf("\n");
	}
	// your code goes here
	return 0;
}

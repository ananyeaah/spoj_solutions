#define max(a,b) a>b?a:b
#include <stdio.h>
char s[8000],s1[8000];
int i,j,c,l,t,lcs[6200][6200];
int main(void) {
	scanf("%d",&t);
		scanf("%s",&s);
		l=strlen(s);
		c=0;
		for(i=l-1;i>=0;i--)
		{
			s1[c++]=s[i];
		}
		s1[c]='\0';
		for(i=0;i<=l;i++)
		{
			for(j=0;j<=l;j++)
			{
				if(i==0||j==0)
				lcs[i][j]=0;
				else if(s[i-1]==s1[j-1])
				lcs[i][j]=lcs[i-1][j-1]+1;
				else
				lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
			}
		}
		printf("%d\n",l-lcs[l][l]);
	// your code goes here
	return 0;
}

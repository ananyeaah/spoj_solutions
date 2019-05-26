#include <stdio.h>
char pat[10000000],text[10000000];
long long int len,t,n,m,i,j,flag;
void make(char *pat,int m,int *lps)
{
	int i=1;
	lps[0]=0;
	len=0;
	while(i<m)
	{
		if(pat[i]==pat[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else
		{
			if(len!=0)
			{
				len=lps[len-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
	free(lps);
}
int main(void) {
	//scanf("%lld",&t);
	while(scanf("%lld",&n)==1)
	{
		//scanf("%lld",&n);
	scanf("%s",pat);
	
	scanf("%s",&text);
	m=strlen(text);
	int *lps = (int *)malloc(sizeof(int)*n);
	make(pat,n,lps);
	i=j=0;flag=0;
		while(i<m)
		{
			if(text[i]==pat[j])
			{
				i++;
				j++;
			}
			if(j==n)
			{
flag=1;
				printf("%lld\n",i-j);
				j=lps[j-1];
			}
			if(i<m&&text[i]!=pat[j])
			{
				if(j!=0)
				j=lps[j-1];
				else
				i++;
			}
		}
if(flag==0)
	printf("\n");
	
	}
	// your code goes here
	return 0;
}

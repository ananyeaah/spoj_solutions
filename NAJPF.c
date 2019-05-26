#include <stdio.h>
char pat[1000010],text[1000010];
long long int len,t,n,m,i,j,flag,c,a[1000010];
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
}
int main(void) {
scanf("%lld",&t);
	while(t--)
	{
		//scanf("%lld",&n);
	scanf("%s",text);
	
	scanf("%s",&pat);
	m=strlen(text);
	n=strlen(pat);
	int *lps = (int *)malloc(sizeof(int)*n);
	make(pat,n,lps);
	i=j=0;flag=0;c=0;
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
			a[c]=i-j+1;
			c++;
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
	printf("Not Found\n");
	else
	{
		printf("%lld\n",c);
		for(i=0;i<c;i++)
		{
			printf("%lld ",a[i]);
			
		}
		printf("\n");
	}
	printf("\n");
	}
	// your code goes here
	return 0;
}

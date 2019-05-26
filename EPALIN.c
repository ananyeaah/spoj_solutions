#include <stdio.h>
long long int m,ans,flag,count,i,j,len,lps[1000100],n,c;
char s1[1000010],s[1000010];
make(char s[],long long int n)
{
	len=0;
	i=1;
	lps[0]=0;
	while(i<n)
	{
		if(s[i]==s[len])
		{
			len++;
			lps[i]=len;
			i++;
		}
		else{
			if(len!=0){
				len=lps[len-1];
			}
			
			else
			{
				lps[i]=0;i++;
			}
		}
	}
}
long long int k=1,t=4;
int main(void) 
{
		while(scanf("%s",&s)==1)
		{
			m=strlen(s);
			c=m-1;
			for(i=0;i<m;i++)
			{
				s1[i]=s[c];
				c--;
			}
			c=0;
			for(;i<2*m;i++)
			{
				s1[i]=s[c];
				c++;
			}
			s1[i]='\0';
//			printf("%s\n",s1);
			make(s1,2*m);
			if(lps[2*m-1]>m)
			{
				k=0;
			}
			else
			k=m-lps[2*m-1];
			printf("%s",s);
			for(i=k-1;i>=0;i--)
			{
				printf("%c",s[i]);
			}
			printf("\n");
		}
	// your code goes here
	return 0;
}
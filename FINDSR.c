#include <stdio.h>
long long int m,ans,flag,count,i,j,len,lps[100010],n,c;
char ar[100010],s[100010];
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

int main(void) {
	scanf("%s",&s);
	while(s[0]!='*')
	{
		m=strlen(s);
		ar[0]='\0';
		make(s,m);
		//n=strlen(ar);
	//int *lps = (int *)malloc(sizeof(int)*n);
	//make(pat,n,lps);
	i=j=0;flag=0;ans=0;
		i=m-lps[m-1];
		if(m%i==0)
	printf("%lld\n",m/i);
else
printf("1\n");
	
	
	scanf("%s",&s);	
	}
	// your code goes here
	return 0;
}





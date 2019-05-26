#include <stdio.h>
long long int m,ans,flag,count,i,j,len,lps[1000100],n,c;
char ar[1000010],s[1000010];
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
long long int k=1,t;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
scanf("%lld",&m);
scanf("%s",&s);
		//m=strlen(s);
		//ar[0]='\0';
		make(s,m);
		//n=strlen(ar);
	//int *lps = (int *)malloc(sizeof(int)*n);
	//make(pat,n,lps);
	i=j=0;flag=0;ans=0;
printf("Test case #%lld\n",k);k++;
		for(i=1;i<m;i++){
		j=i+1-lps[i];
	if((i+1)%j==0&&j!=i+1)
	printf("%lld %lld\n",i+1,(i+1)/j);
}printf("\n");
	
	//scanf("%s",&s);	
	}
	// your code goes here
	return 0;
}





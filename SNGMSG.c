#include <stdio.h>
char s[1000],a[1000];
int t,j,ar[1000],i,n1,n,c,flag,temp,k,j;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{c=0;
		scanf("%s",&a);
scanf("%s",&s);
		c=strlen(a);
		
		flag=0;k=0;
		
		for(i=0;s[i]!='\0';i++)
		{
			if(flag==0)
			{
				s[i]=s[i]-a[k]+'0';
				k++;
				if(s[i]<97)
				s[i]=s[i]+26;
			}
			else
			{
			s[i]=s[i]-a[k]+'0';
			k--;
			if(s[i]<97)
				s[i]=s[i]+26;
			
			}
			if((k==0)&&(s[i+1]!='\0'))
			{s[i]=s[++i]-a[k]+'0';flag=0;
			}
			
			if((k==c-1)&&(s[i+1]!='\0'))
			{
				s[i]=s[++i]-a[k]+'0';flag=1;
			}
			if(s[i]<97)
				s[i]=s[i]+26;
		}
		printf("%s\n",s);
	}
return 0;
}
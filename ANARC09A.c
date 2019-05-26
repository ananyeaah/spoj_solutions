#include <stdio.h>
int k=1,c,i,l,h,r,l,le,ans;
char s[2010];

int main(void) {
	scanf("%s",&s);
	while(s[0]!='-')
	{c=0;ans=0;
	//int stack[2010]={0};
	r=0;
	le=0;
	l=strlen(s);
		for(i=0;i<l;i++)
		{
			
			if(s[i]=='{')
			{
				c++;
			}	
			else 
			{
				if(c<1)
				{ans++;
				c++;
					le++;
				}
				else
				{
					c--;
				}
			}
		}
	//	printf("%d %d\n",r,le);
	printf("%d. %d\n",k,ans+c/2);
		scanf("%s",&s);
		k++;
	}
	// your code goes here
	return 0;
}

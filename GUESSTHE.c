#include <stdio.h>
char s[1000];
long long int temp;
long long int func(long long int a,long long int b)
{long long int x=a;
long long int y=b;
	while (b != 0) {
    temp = b;
    b = a % b;
    a = temp;
  }
 
  long long int gcd = a;
 long long int ans = (x/gcd)*y;
	
	return ans;
}
long long int i,j,k,l,a[100],lcm=1,flag,t;
int main(void) {
	scanf("%s",&s);
	while(s[0]!='*')
	{lcm=1;flag=0;
	int yes=0;
		l=strlen(s);
		if(s[0]=='N')
		{
			printf("-1\n");
			goto x;
		}
		for(i=0;s[i]!='\0';i++)
		{
			
			if(s[i]=='Y')
			{yes=1;
				a[i]=1;
				lcm=func(i+1,lcm);
			}
			
		}
		for(i=0;i<l;i++)
		{
			if(s[i]=='N')
			{
				if(lcm%(i+1)==0)
				{
					flag=1;break;
				}
			}
		}
		if(flag==1)
		printf("-1\n");
		else if (yes==0)
		printf("0\n");
		else
		printf("%lld\n",lcm);
		
	x:
	scanf("%s",&s);	
	}
	// your code goes here
	return 0;
}

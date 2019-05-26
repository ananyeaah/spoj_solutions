#include <stdio.h>
char a[501],b[501];
int k,flag,i;
int main(void) {
	scanf("%s%s",&a,&b);
	while((a[0]!='*')&&(b[0]!='*'))
	{k=0,flag=0;
		for(i=0;a[i]!='\0';i++)
		{flag=0;
			if(a[i]==b[i])
			continue;
			while((a[i]!=b[i])&&(a[i]!='\0'))
			{
				flag=1;
				i++;
				
				
			}
			i--;
			if(flag==1)
			k++;
		
			
		}
		printf("%d\n",k);
	scanf("%s%s",&a,&b);	
	}
	// your code goes here
	return 0;
}

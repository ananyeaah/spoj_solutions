#include<string.h>
#include <stdio.h>
char s[1000],m[250][250],temp;
int l,r,c,i,j,k,co;
int main(void) {
	scanf("%d",&c);
	while(c!=0)
	{
		gets(s);k=0;
		l=strlen(s);
		r=l/c;
		for(i=0;i<r;i++)
		{
			if(i%2==0)
			{
				for(j=0;j<c;j++)
				{m[i][j]=s[k];k++;}
				}
				else
				{
					for(j=c-1;j>=0;j--)
					{
						m[i][j]=s[k];
						k++;
					}
				}	
				}
		
		for(i=0;i<c;i++)
		for(j=0;j<r;j++)
		printf("%c",m[j][i]);
		printf("\n");
	scanf("%d",&c);	
	}
	// your code goes here
	return 0;
}

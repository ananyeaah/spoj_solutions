#include <stdio.h>

int main(void) {
	int p,i,j,k,n;
	char s[41];

	char seq[9][4]={"TTT","TTH","THT","THH","HTT","HTH","HHT","HHH"};
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
			int c[10]={0};
		scanf("%d%s",&n,&s);
		printf("%d ",i);
		for(k=0;k<8;k++)
		{
		for(j=0;j<38;j++)
		{
			if((s[j]==seq[k][0])&&(s[j+1]==seq[k][1])&&(s[j+2]==seq[k][2]))
			c[k]++;
			
		}
		printf("%d ",c[k]);
		}
		printf("\n");
	}
	// your code goes here
	return 0;
}

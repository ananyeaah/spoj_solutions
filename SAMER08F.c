#include <stdio.h>
int N,s,i;
int main(void) {
	scanf("%d",&N);
	while(N!=0)
	{s=0;
		for(i=1;i<=N;i++)
		{
			s=s+i*i;
		}
		printf("%d\n",s);
	scanf("%d",&N);
	
	}
	// your code goes here
	return 0;
}

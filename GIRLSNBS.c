#include <stdio.h>
int G,B,n;
int main(void) {
	scanf("%d%d",&G,&B);
	while((G!=-1)&&(B!=-1))
	{
	if((G==0)&&(B==0))
	n=0;
else if(G==B)
	n=1;
else if(G>B)
	n=(G+B)/(B+1);
	else if(B>G)
	n=(G+B)/(G+1);
	printf("%d\n",n);
	
	scanf("%d%d",&G,&B);	
	}
	// your code goes here
	return 0;
}

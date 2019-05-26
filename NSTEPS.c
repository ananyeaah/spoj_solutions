#include <stdio.h>
int t,x,y,flag,sum;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{flag=0;
	scanf("%d %d",&x,&y);
		if(((x==y)||((x-2)==y))&&((x>=0)&&(y>=0)))
		flag=1;
		if(x%2==0)
		sum=x+y;
		else
		sum=x+y-1;
	if(flag==1)
	printf("%d\n",sum);
	else
	printf("No Number\n");}
	// your code goes here
	return 0;
}

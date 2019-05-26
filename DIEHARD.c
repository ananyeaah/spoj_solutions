#include <stdio.h>
int h,a,t,i,c;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&h,&a);
		c=0;
		while(h>0&&a>0){
		h=h+3;c++;
		a=a+2;
		if(h-20>0&&h-20>a-10)
		{
			h=h-20;
			a=a+5;
			c++;
		}
		else if(a>10&&h>5)
		{
			h=h-5;
			a=a-10;
			c++;
		}
		else
		break;
					}
	printf("%d\n",c);
	}
	// your code goes here
	return 0;
}

#include <stdio.h>
int a,b,c,d,e,f,g,h;
int main(void) {
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
	while((a!=-1)&&(b!=-1)&&(c!=-1)&&(d!=-1)&&(g!=-1)&&(f!=-1)&&(e!=-1)&&(h!=-1))
	{
		while((a>0)||(b>0)||(c>0)||(d>0))
		{
			a=a-e;
			b=b-f;
			c=c-g;
			d=d-h;
		}
		a*=-1;
		b*=-1;
		c*=-1;
		d*=-1;
		printf("%d %d %d %d\n",a,b,c,d);
		
	scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);	
	}
	// your code goes here
	return 0;
}

#include <stdio.h>
int i,ng,nm,m1=0,j,m2=0,a,b,t;
int main(void) {
	
	scanf("%d",&t);
	while(t--)
	{m1=0;m2=0;
		scanf("%d%d",&ng,&nm);
		for(i=0;i<ng;i++)
		{scanf("%d",&a);
		if(m1<a)
		m1=a;
		}
		
		for(j=0;j<nm;j++)
		{scanf("%d",&b);
		if(m2<b)
		m2=b;
		}
		if(m1<m2)
		printf("MechaGodzilla\n");
		else
		printf("Godzilla\n");
		}
	// your code goes here
	return 0;
}


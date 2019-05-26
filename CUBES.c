#include <stdio.h>
int a=6,b,c,d,i,j,k;
int main(void) {
	for(;a<=100;a++)
	{
	for(i=2;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			for(k=j;k<a;k++)
			{
				if((i*i*i+j*j*j+k*k*k)==a*a*a)
				printf("Cube = %d, Triple = (%d,%d,%d)\n",a,i,j,k);
			}
		}
	}
	}
	// your code goes here
	return 0;
}

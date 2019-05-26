#include <stdio.h>
long int i,j,n,p[100000],ip[100000],flag;
int main(void) {
	scanf("%ld",&n);
	while(n!=0)
	{ flag = 1 ;
for( i = 0 ; i < n ; i++)
{
scanf("%ld",&p[i]);
ip[p[i]-1] = i+1;
}
for( i = 0 ; i < n ; i++)
{
if(ip[i] != p[i])
flag = 0;
}
if(flag == 1)
printf("ambiguous\n");
else
printf("not ambiguous\n");
	scanf("%ld",&n);	
	}
	// your code goes here
	return 0;
}

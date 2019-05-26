#include <stdio.h>
int i,s1,n,s=0,a[20];
int main(void) 
{
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<10;i++)
	{
	s=s+a[i];
	if(s>=100)
	{
		s1=s-a[i];
		if((100-s1)<(s-100))
		printf("%d\n",s1);
		else
		printf("%d\n",s);
	return 0;
	}
	
	}
	printf("%d\n",s);
	
	// your code goes here
	return 0;
}

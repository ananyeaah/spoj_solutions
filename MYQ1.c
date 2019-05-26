#include <stdio.h>

int main(void) {
	long int t;
	long long int n;
	char s,ty;
	long long int r;
	scanf("%ld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(n==1){
		printf("poor conductor\n");
		continue;}
		r=((n-2)/5)+1;
		
		if(((n-2)%10==0)||((n-11)%10==0))
		{s='L';ty='W';}
else if(((n-3)%10==0)||((n-10)%10==0))
		{s='L';ty='A';}	
		else if((n-4)%5==0)
		{s='R';ty='A';}
		else if(((n-5)%10==0)||((n-8)%10==0))
		{s='R';ty='M';}
		else if(((n-6)%10==0)||((n-7)%10==0))
		{s='R';ty='W';}
	printf("%lld %c %c\n",r,ty,s);
	}
	// your code goes here
	return 0;
}

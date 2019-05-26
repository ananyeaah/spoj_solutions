#include<math.h>
#include <stdio.h>
int a,t,ld,rem;
long long int b;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d%lld",&a,&b);
		if(a==0&&b==0)
		{printf("1\n");continue;}
		rem=b%4;
		if(b!=0&&rem==0)
		rem=4;
		ld=((int)(pow(a,rem)))%10;
	if(b==0)
	printf("1\n");
	else
		printf("%d\n",ld);
	}
	// your code goes here
	return 0;
}




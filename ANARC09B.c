#include <stdio.h>
long long int m,l,g,s,ans;
long long int gcd(long long int a,long long int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}

int main(void) {
	scanf("%lld%lld",&l,&m);
while(l!=0&&m!=0){
	g=gcd(l,m);
	s=(l*m)/g;
	ans=(s/l)*(s/m);
	
	printf("%lld\n",ans);
	scanf("%lld%lld",&l,&m);
}	// your code goes here
	return 0;
}

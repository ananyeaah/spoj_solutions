#include <stdio.h>
//void multiply(long long int F[2][2],long long int M[2][2]);
 
//void power(long long int F[2][2],long long int n);
 
/* function that returns nth Fibonacci number */
long long int fib(long long int n,long long int m)
{
long long int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1,m);
  return F[0][0]%m;
}
 
/* Optimized version of power() in method 4 */
void power(long long int F[2][2], long long int n,long long int m)
{
  if( n == 0 || n == 1)
      return;
  long long int M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2,m);
  multiply(F, F,m);
 
  if (n%2 != 0)
     multiply(F, M,m);
}
 
void multiply(long long int F[2][2],long long int M[2][2],long long int m)
{
  long long int x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%m;
  long long int y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%m;
  long long int z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%m;
  long long int w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%m;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 
long long int x1,x2,m,n,t,x;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		x1=(2%m*((fib(n+2,m)-1)%m))%m;
		x=(x1-(n%m)+m)%m;
		printf("%lld\n",x);
	}
	// your code goes here
	return 0;
}

#include <cstdio>
#include <map>
#include <algorithm>
#include <iostream>
using namespace std;
long long n,i;
map<long long,long long> dp;
long long int f2(long long int n)
{
	if(n==0)
	return 0;
	if(dp[n]!=0)
	return dp[n];
	else
	return dp[n]=max(n,f2(n/2)+f2(n/3)+f2(n/4));
}
int main() {
		while(scanf("%lld",&n)==1)
	{
			printf("%lld\n",f2(n));
	}
	// your code goes here
	return 0;
}
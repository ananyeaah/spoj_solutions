#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,r[100010],c[100010],ans;
long long int solve(long long int a[],long long int n)
{
	long long int i;
	a[n]=a[n+1]=0;
	for(i=n-1;i>=0;i--)
	{
		a[i]=max(a[i+1],a[i]+a[i+2]);
	}
	//	if(n==2)
	//	a[0]=max(a[0],a[1]);
	//}
	return a[0];
}
int main() {
	long long int m,n;
	scanf("%lld%lld",&m,&n);
	while(m!=0&&n!=0)
	{
		if(m==0&&n==0)
		break;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lld",&r[j]);
			}
			c[i]=solve(r,n);
		}
		ans=solve(c,m);
		printf("%lld\n",ans);
		scanf("%lld%lld",&m,&n);
	}
	// your code goes here
	return 0;
}
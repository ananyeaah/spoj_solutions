#include <stdio.h>
char s[10010];
long long int i,j;
int main(void) {
	scanf("%s",&s);
	while(s[0]!='0')
	{
		long long int dp[5010]={0};
		dp[0]=1;
		int l=strlen(s);
		for(i=1;i<=l-1;i++)
		{
		long long int n1=10*(s[i-1]-'0')+(s[i]-'0');
			if(s[i]-'0')
			dp[i]=dp[i-1];
			if(n1>9&&n1<27)
			dp[i]+=dp[i-2>=0?i-2:0];
		}
		printf("%lld\n",dp[l-1]);
		scanf("%s",&s);
	}
	// your code goes here
	return 0;
}
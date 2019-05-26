#include <stdio.h>
char ch[101];
	char s[101][10];
		long long int arr[10000],co[1000010],q[1000010];
	long long int p=1,t,n,i,k,c,flag,cor;
void dfs(long long int v)
{
	//printf("v is %lld cor is%lld co[v]is%lld\n",v,cor,co[v]);
	if(co[v]==1)
	{//printf("mo\n");
		if(cor==0)
		{
	//printf("GP\n");		
			flag=1;
		}
		return;
	}
	co[v]=1;
	
	if(cor==1)
	{
		if(ch[v]=='t')
		{
				//printf("hey1\n");
			cor=1;
			dfs(arr[v]);
		}
		else
		{	//printf("hey2\n");
			cor=0;
			dfs(arr[v]);
		}
	}
	else if(cor==0)
	{
		if(ch[v]=='f')
		{	//printf("hey3\n");
			cor=1;
			dfs(arr[v]);
		}
		else
		{	//printf("hey4\n");
			cor=0;
			dfs(arr[v]);
		}
	}

}
int main(void) {
scanf("%lld",&n);
	while(n!=0)
	{	flag=0;
		cor=1;
    for (i = 0; i <= n; ++i) {
     co[i]=0;
    }
     for (i = 1; i <=n; ++i) {
        scanf("%lld%s", &arr[i], &s[i]);
       ch[i]=s[i][0];
           }
        for(i=1;i<=n;i++)
        {
        	if(co[i]==0)
        	{	c++;
        	cor=1;
        		dfs(i);
        		if(flag==1)
        		{
        			break;
        		}
    //    	s=i;
        	}
        }
       if(flag==1)
         printf("PARADOX\n");
         else
         printf("NOT PARADOX\n");
    scanf("%lld",&n);
  	}
	// your code goes here
	return 0;
}

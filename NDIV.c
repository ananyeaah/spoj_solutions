#include <stdio.h>

int seive[32010]={0};
int n,k,c,ans,a,b,i,i1,j;
int prime[10000];

void func(){
	seive[0]=seive[1]=1;
	int i;
	for(i=3;i*i<=32000;i=i+2){
		if(seive[i]==0){
			int temp = i*i;
			while(temp<=32000){
				seive[temp]=1;
				temp+=2*i; //ignore even numbers
			}
		}
	}
	
	prime[0]=2; k=1;
	for(i=3;i<=32000;i+=2)
	{
		if(seive[i]==0)
		{
			prime[k]=i;
			k++;
 //printf("%d\n",i);
		}
	}
	k--;
}

int main(void) {
scanf("%d%d%d",&a,&b,&n);
func();
int k=0;
ans=1;int final=0;
	for(i=a;i<=b;i++)
	{i1=i;ans=1;k=0;
		for(j=prime[0];j*j<=i1;j=prime[++k])
		{if(i1%j==0){
					c=0;
		
			while(i1%j==0)
			{
				c++;
				i1=i1/j;
			}
			ans*=(c+1);
		}
		if(ans>n)
		break;
		}
		if(i1>1)
		ans=ans*2;
		if(n==ans)
		{
			final++;
		}
		
	}
	printf("%d\n",final);
	// your code goes here
	return 0;
}

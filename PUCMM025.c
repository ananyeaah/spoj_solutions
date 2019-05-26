#include<stdio.h>
int main()
{
	char s[250];
	int three,two,temp,len,i,sum,k,count,seven[6]={1,3,2,6,4,5};
	while(scanf("%s",s)==1)
	{
		three=0;two=0;
		int by[10]={0},digits[10]={0};
		temp=0;
		sum=0;count=0;
		for(i=0;s[i];++i)
		{
			sum+=s[i]-48;
			++digits[s[i]-48];
		}
		if(digits[1])
		{
			by[1]=1;
		}
		len=i-1;
		if((sum%9==0))
		{
			temp=1;
		}
 
		if(digits[9]&&temp)
		{
			by[9]=1;
		}
		 if((sum%3==0))
		{
			three=1;
		}
		if(digits[3]&&three)
		{
			by[3]=1;
		}
		if(((s[len]-48)%2==0))
		{
 
			two=1;
		}
		if(digits[2]&&two)
		{
			by[2]=1;
		}
 
		if(three&&two&&digits[6])
			by[6]=1;
		if(digits[5]&&((s[len]-48)%5==0))
			by[5]=1;
		temp=(s[len-1]-48)*10+s[len]-48;
		if((temp%4==0)&&digits[4])
			by[4]=1;
		temp=(s[len-2]-48)*100+(s[len-1]-48)*10+s[len]-48;
		if((temp%8==0)&&digits[8])
			by[8]=1;
		sum=0;k=0;
		if(digits[7])
		{
 
		for(i=len;i>=0;--i)
		{
			sum+=(s[i]-48)*seven[k];
			++k;
			if(k==6)
				k=0;
		}
		if(sum%7==0)
			by[7]=1;
		}
		for(i=0;s[i];++i)
		{
			if(by[s[i]-48])
			{
				++count;//printf("%d\t",s[i]-48);
			}
		}	
		printf("%d\n",count);
 
	}
 
	return 0;
}
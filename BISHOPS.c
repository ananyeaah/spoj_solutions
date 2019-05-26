#include<string.h>
#include <stdio.h>
char s[150];
int a[150],i,x,l,carry,j,k,x,c;
int main(void) {
	while(scanf("%s",s)!=EOF)
	{l=strlen(s);
	j=l-1;
	
	if((strlen(s))==1&&(s[0]=='1'))
	printf("1\n");
	else
	{
		for(i=0;i<l;i++)
		{
			a[j]=s[i]-'0';
			j--;
		}
		carry=0;
		for(i=0;i<l;i++)
		{
			x=(a[i]*2+carry);
			carry=x/10;
			a[i]=x%10;
		}
		if(carry>0)
		{a[i]=carry;k=i;}
		else
		k=i-1;
		
		c=2;
		for(i=0;i<=k;i++)
		{
			if(a[i]>=c)
			{a[i]=a[i]-c;
			break;}
			else{
			a[i]=10+a[i]-c;
			c=1;
		}
		
	}
	if(a[k]>0)
              printf("%d",a[k]);
                for(l=k-1;l>=0;l--){
                    printf("%d",a[l]);
	}
	printf("\n");
	}
	}

	// your code goes here
	return 0;
}

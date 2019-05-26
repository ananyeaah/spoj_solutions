#include <stdio.h>
long long int t;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		
		long long int l,i,n,j,p,key,key1,c,x;
		int hash[140]={0};
		char hashst[150][150];
		
		scanf("%lld",&n);
		//printf("%lld\n",n);
		start:
		while(n--)
		{
			char s[110];
			scanf("%s",&s);
			l=strlen(s);
			//printf("%lld\n",l);
		
			char s1[110];
			for(i=4;i<l;i++)
			{
				s1[i-4]=s[i];
			}
			s1[i-4]='\0';
			key=0;
			//printf("%s\n",s1);
			for(p=0;p<l-4;p++)
			{
				//printf("%d\n",s1[p]);
				key=key+((long long)s1[p]*(p+1));
			}
				//printf("%s\n",s1);
			key=key*19;
			key=key%101;
	
		//printf("%lld\n",key);		
			if(s[0]=='A')
			{
				for(p=0;p<101;p++)
				{
					if((!(strcmp(hashst[p],s1))))
					{
						//printf("repeat\n%s",hashst[p]);
						goto start;
					}
				}			
				for(p=0;p<20;p++)
				{
					key1=(key+p*p+23*p)%101;
					if(hash[key1]==0)
					{
						hashst[key1][0]='\0';
						for(x=0;s1[x];x++)
						{
							hashst[key1][x]=s1[x];
						}
						hashst[key1][x]='\0';
						hash[key1]=1;
						//printf("%s\n",hashst[key1]);
						break;
					}
				}
				//printf("%lld\n",key1);
			}
			else
			{//printf("%s\n",s1);
				for(p=0;p<20;p++)
				{
					
					key1=(key+p*p+23*p)%101;
					if(hash[key1]==1)
					{
						
						if(strcmp(hashst[key1],s1)==0){
							
						hash[key1]=0;
						hashst[key1][0]='\0';
			//			printf("%s\n",hashst[key1]);
						break;}
					}
					//printf("%s\n",hashst[key1]);
				}
			}
		}
			c=0;
			for(i=0;i<101;i++)
			{
				if(hash[i]==1)
				{
					c++;
				}
			}
			printf("%lld\n",c);
			for(i=0;i<101;i++)
			{
				if(hash[i]==1)
				{
					printf("%lld:%s\n",i,hashst[i]);
				}
			}
			for( i=0; i<101; i++)
            {
            	hash[i]=0;
            	hashst[i][0]='\0';
            }
	}
	// your code goes here
	return 0;
}
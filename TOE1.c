#include <stdio.h>
char s[10];
int t,cx,co,p,q,k,i,j,flag1,flag2,flag;
int main(void) {
	scanf("%d",&t);
	while(t--)
	{cx=co=0;k=1;
	q=p=0;
	int px[10]={0};
	int po[10]={0};
		for(i=0;i<3;i++)
		{
			scanf("%s",&s);
			for(j=0;j<3;j++)
			{
				if(s[j]=='X')
				{
					
					px[k]=1;
					cx++;
				}
				if(s[j]=='O')
				{
					px[k]=2;	
				co++;
				}
			k++;
			}
			
		}
		flag=flag2=flag1=0;
		if((px[1]==1&&px[2]==1&&px[3]==1)||(px[4]==1&&px[5]==1&&px[6]==1)||(px[7]==1&&px[8]==1&&px[9]==1)||(px[1]==1&&px[4]==1&&px[7]==1)||(px[2]==1&&px[5]==1&&px[8]==1)||(px[3]==1&&px[6]==1&&px[9]==1)||(px[1]==1&&px[5]==1&&px[9]==1)||(px[3]==1&&px[5]==1&&px[7]==1))
		{
		flag1=1;	
		}
		if((px[1]==2&&px[2]==2&&px[3]==2)||(px[4]==2&&px[5]==2&&px[6]==2)||(px[7]==2&&px[8]==2&&px[9]==2)||(px[1]==2&&px[4]==2&&px[7]==2)||(px[2]==2&&px[5]==2&&px[8]==2)||(px[3]==2&&px[6]==2&&px[9]==2)||(px[1]==2&&px[5]==2&&px[9]==2)||(px[3]==2&&px[5]==2&&px[7]==2))
		{
			flag2=1;
		}
		if((cx!=co)&&(cx-co!=1))
		{
			flag=1;
			//printf("1 cx%d co%d\n",cx,co);
			
		}
		if(cx==co)
		{
			if(flag1==1)
			{
				flag=1;
				//	printf("2\n");
			}
		}
		if(cx==co+1)
		{
			if(flag2==1)
			{
				flag=1;
				//	printf("3\n");
			}
		}
		if(flag==1)
		printf("no\n");
		else
		printf("yes\n");
		
		
	}
	// your code goes here
	return 0;
}

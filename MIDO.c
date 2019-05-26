#include <stdio.h>
int n,t1=0,t2=0,m1=0,h1=48,h2=0,s1=0,m2=0,s2=0,t,i,j,team[1000],min[1000],sec[1000],dif[1000];
int main(void)
{
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d:%d",&team[i],&min[i],&sec[i]);
		sec[i]=min[i]*60+sec[i];	
	}
	
	for(i=0;i<t-1;i++)
	{
			if(team[i]==1)
		t1++;
		else
		t2++;
		if(t1>t2)
		{
			s1=s1+sec[i+1]-sec[i];
		}
		if(t1<t2)
		{
		s2=s2+sec[i+1]-sec[i];
		}
	
	}
	if(team[i]==1)
	t1++;
	else
	t2++;
	
		if(t1>t2)
		{
			
		s1=s1+48*60-sec[t-1];
		}
		if(t1<t2)
		{
			s2=s2+48*60-sec[t-1];
		}
		m1=s1/60;
		s1=s1%60;
		m2=s2/60;
		s2=s2%60;
		
		printf("%d%d:%d%d\n%d%d:%d%d\n",m1/10,m1%10,s1/10,s1%10,m2/10,m2%10,s2/10,s2%10);
	// your code goes here
	return 0;
}

#include <stdio.h>
int a,b,i,s=0,flag=0,n,h=0,tf=0,f=0;
int main(void) {
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d/%d",&a,&b);
		if(b==2)
		h++;
		else if((a==1)&&(b==4))
		f++;
		else if((a==3)&&(b==4))
		tf++;
	}
	if(tf>=f)
	{s=s+tf;f=f-tf;}
	else
	{
		s=s+tf;
		f=f-tf;
	}
	s=s+(int)ceil(h/2.0);
	if(h%2!=0)
	{
		f=f-2;
	}
	if(f>0)
	{
		s=s+(int)ceil(f/4.0);
	}
	
	printf("%d\n",s+1);
	// your code goes here
	return 0;
}

#define min(a,b) (a<b)?a:b
#include <stdio.h>
int t,n,i,j,q,a[1000000],s[1000000],f,se;
void cons(int node,int x,int y)
{
	if(x==y)
	{
		s[node]=a[x];
	}
	else{
	int m=(x+y)/2;
	cons(2*node,x,m);
	cons(2*node+1,m+1,y);
	s[node]=min(s[node*2],s[node*2+1]);
}}
int query(int node,int b,int e,int i,int j)
{
	if(i>e||j<b)
	return 10000000000;
	else if(b>=i&&e<=j)
	{
		return s[node];
	}
int  p=query(2*node,b,(b+e)/2,i,j);
	int q=query(2*node+1,(b+e)/2+1,e,i,j);
	return min(p,q); 
}
int main(void) {

	scanf("%d",&t);
	int k;
	k=1;
	while(t--)
	{
		scanf("%d%d",&n,&q);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		cons(1,0,n-1);
		printf("Scenario #%d:\n",k);
	//	for(i=0;i<2*n-1;i++)
	//	printf("%d  ",s[i]);
		for(i=0;i<q;i++)
		{
			scanf("%d%d",&f,&se);
			 int ans=query(1,0,n-1,f-1,se-1);
			printf("%d\n",ans);
		}
		k++;
	}
	// your code goes here
	return 0;
}

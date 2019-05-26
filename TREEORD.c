#include <stdio.h>
/*struct node
{
    int data;
    node* left;
    node* right;
};*/
int i,j,n,flag,high,low,mid,x[8010],k;
int search(int arr[], int x, int n)
{
    for ( i = 0; i < n; i++)
      if (arr[i] == x)
         return i;
   // return -1;
}
void fun(int p1[],int p2[],int n)
{
	int s=search(p2,p1[0],n);
			if(s!=0)
			fun(p1+1,p2,s);
			if(s!=n-1)
			fun(p1+s+1,p2+s+1,n-s-1);
			
	x[k++]=p1[0];	
}
	int a[8010],b[8010],c[8010],d[8010];
int main(void) {
	scanf("%d",&n);
k=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
		for(i=0;i<n;i++)
	{
		scanf("%d",&c[i]);
	}
	fun(a,c,n);
	flag=0;j=0;
//	for(i=0;i<n;i++)
//	printf("%d ",x[i]);
	for(i=0;i<n;i++)
	{
		if(b[i]!=x[i])
		flag=1;
		j++;
	}
	if(flag==1)
	printf("no\n");
	else
	printf("yes\n");
	// your code goes here
	return 0;
}

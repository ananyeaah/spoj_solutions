#define max(a,b) (a>b)?a:b
#include<vector>
#include <iostream>
using namespace std;
struct segT
{
	long int sum,rs,ls,ms,m;
};
segT v[200003];
int q,t,n,i,k,l;
long int a[50003];
segT make(long int left,long int right,long int best,long int sum1)
{
	segT temp;
	temp.sum=sum1;
	temp.m=best;
	temp.ls=left;
	temp.rs=right;
	return temp;
}
segT combine(segT xx,segT yy)
{
	long int left=max(xx.ls,xx.sum+yy.ls);
	long int right=max(yy.rs,yy.sum+xx.rs);
	long m=max(xx.rs+yy.ls,max(xx.m,yy.m));
    return make(left,right,m,xx.sum+yy.sum);
}
segT cons(int node,int i,int j)
{
	if(i==j)
	{
	v[node]=make(a[i],a[i],a[i],a[i]);
	return v[node];
	}
	int mid=(i+j)/2;
	segT l=cons(2*node,i,mid);
	segT r=cons(2*node+1,mid+1,j);
	return v[node]=combine(l,r);
}
segT ans(int node,int i,int j,int qs,int qe)
{
	if(i==qs&&j==qe)
	return v[node];
	int mid=(i+j)/2;
	if(qe<=mid)
	return ans(2*node,i,mid,qs,qe);
	if(qs>mid)
	return ans(2*node+1,mid+1,j,qs,qe);
	segT l1=ans((node<<1),i,mid,qs,mid);
    segT r1=ans((node<<1)+1,mid+1,j,mid+1,qe);
    return combine(l1,r1);
}
int main(void) {
	cin >> n;
	for(i=1;i<=n;i++)
	cin >>a[i];
	cons(1,1,n);
	cin>>q;
	while(q--)
	{
		cin>>k>>l;
		cout <<ans(1,1,n,k,l).m <<endl; 
	}
	return 0;
}
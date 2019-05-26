#include <stdio.h>
long long int v1,v2,pos[20010],vertex,u,v,top,q[20010],t,n,k,i,j,vi[20010],p[20010],rear;
int main(void) {
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		for(i=0;i<=n;i++)
		{
			vi[i]=-1;
			p[i]=-1;
			pos[i]=-1;
		}
		top=0;rear=0;
		vi[1]=1;
		if(n==1)
		{
			printf("1\n");
			continue;
		}
		q[rear++]=1;
		while(top!=rear)
		{
		//	printf("YDS");
			u=q[top];
			v1=(u*10)%n;
			if(v1==0)
			{
				p[v1]=u;
				pos[v1]=0;
				vertex=v1;
				break;
			}
			if(vi[v1]==-1)
			{
				vi[v1]=1;
				q[rear++]=v1;
					p[v1]=u;
				pos[v1]=0;
			}
			v2=(u*10+1)%n;
			if(v2==0)
			{
					p[v2]=u;
				pos[v2]=1;
				vertex=v2;
				break;
			}
			if(vi[v2]==-1)
			{
				vi[v2]=1;
				q[rear++]=v2;
				p[v2]=u;
				pos[v2]=1;
			}
			top++;
			vi[u]=0;
		}
		int st[20010];
	//	printf("%lld",vertex);
		i=vertex;
		int c=0;
		printf("1");
		while(pos[i]!=-1)
		{
			st[c++]=pos[i];
		//	printf("%d\n",pos[i]);
			i=p[i];
		}
		//st[c]='\0';
		for(i=c-1;i>=0;i--)
		printf("%d",st[i]);
		printf("\n");
	}
	// your code goes here
	return 0;
}

#include <stdio.h>
long long int f,s,g,u,d,v1,v2,lev[1000010],vertex,v,top,q[1000010],t,n,k,i,j,vi[1000010],p[1000010],rear;
int main(void) {
		scanf("%lld%lld%lld%lld%lld",&f,&s,&g,&u,&d);
		for(i=0;i<=f;i++)
		{
			vi[i]=-1;
			p[i]=-1;
			lev[i]=-1;
		}
		top=0;rear=0;
		vi[s]=1;
		lev[s]=0;
		q[rear++]=s;
		while(top!=rear)
		{
			vertex=q[top];
			v1=vertex+u;
			if((vi[v1]==-1&&v1<=f)||(v1<=f&&lev[vertex]+1<lev[v1]))
			{
				vi[v1]=1;
				q[rear++]=v1;
					p[v1]=u;
				lev[v1]=lev[vertex]+1;
			}
			if(v1==g)
			{
				break;
			}
			//	printf("%lld vertex%lld lev[v1]%lld\n",vertex,v1,lev[v1]);
			v2=vertex-d;
			if((vi[v2]==-1&&v2>0)||(v2>0&&lev[vertex]+1<lev[v2]))
			{
				//printf("YES");
				vi[v2]=1;
				q[rear++]=v2;
					//p[v2]=u;
				lev[v2]=lev[vertex]+1;
			}
			if(v2==g)
			{
				break;
			}
				//printf("%lld vertex%lld lev[v2]%lld\n",vertex,v2,lev[v2]);
			top++;
			vi[vertex]=0;
		}
		//for(i=0;i<=f;i++)
		if(lev[g]==-1) printf("use the stairs");
	else
		printf("%lld\n",lev[g]);
	// your code goes here
	return 0;
}

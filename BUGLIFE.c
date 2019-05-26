#include <stdio.h>
struct Edge {
    int vertex;
    struct Edge * next;
};
struct Edge * AddEdge(struct Edge * currentHead, int newVertex)
{
    struct Edge * newHead
                 = (struct Edge *) malloc(sizeof(struct Edge));
  
    newHead->vertex = newVertex;
    newHead->next = currentHead;
  
    return newHead;
}
long long int p=1,t,n,i,k;
int main(void) {
	
	scanf("%lld",&t);
	while(t--)
	{long long int v1,v2,flag=0;
		struct Edge * adjacencyList[2010];
		scanf("%lld %lld",&n,&k);
		//long long int parent[2010];
    //long long int level[2010];
    for (i = 0; i <= n; ++i) {
        adjacencyList[i] = NULL;
       // parent[i] = 0;
        //level[i] = -1;
    }
  long long int s,front,rear;
    for (i = 1; i <=k; ++i) {
        scanf("%lld%lld", &v1, &v2);
        if(i==1)
        s=v1;
       adjacencyList[v1] = AddEdge(adjacencyList[v1], v2);
        adjacencyList[v2] = AddEdge(adjacencyList[v2], v1);
    }
    		long long int co[2010];
    for(i=0;i<=n;++i)
        co[i] = -1;
        start:
        co[s]=1;
        front=0;
        rear=0;
        long long int q[2010],u;
        q[rear++]=s;
        struct Edge * tr;
        while(front!=rear)
        {
        	u=q[front++];
        		tr=adjacencyList[u];
        		while (tr != NULL) 
        		{
                    if (co[tr->vertex] == -1) {
                    	co[tr->vertex]=1-co[u];
                        q[rear++]=tr->vertex;
                    }
                    if(co[tr->vertex]==co[u])
                    {
                    	flag=1;
                    	goto suspi;
        //printf("%lld\n",co[tr->vertex]);
                    }
        	tr=tr->next;
        		}
        }
        for(i=1;i<=n;i++)
        {
        	if(co[i]==-1)
        	{
        		s=i;
        		goto start;
        	}
        }
       
       suspi: 
        if(flag==1)
        printf("Scenario #%lld:\nSuspicious bugs found!\n",p);
        else
        printf("Scenario #%lld:\nNo suspicious bugs found!\n",p);
        p++;
  	}
	// your code goes here
	return 0;
}

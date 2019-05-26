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
long long int p,t,n,i,k;
int main(void) {
	long long int v1,v2,flag=0;
		struct Edge * adjacencyList[10010];
		scanf("%lld",&n);
		//long long int parent[2010];
    long long int level[10010];
    for (i = 0; i <= n; ++i) {
        adjacencyList[i] = NULL;
       // parent[i] = 0;
        level[i] = -1;
    }
  long long int s,front,rear,lev=0;
    for (i = 1; i <=n-1; ++i) {
        scanf("%lld%lld", &v1, &v2);
        if(i==1)
        s=v1;
       adjacencyList[v1] = AddEdge(adjacencyList[v1], v2);
        adjacencyList[v2] = AddEdge(adjacencyList[v2], v1);
    }
    		long long int co[10010];
    
        start:
    	for(i=1;i<=n;++i)
        {co[i]=-1;
        level[i]=-1;
        }    lev=0;
    //printf("s is%lld\n",s);
        co[s]=1;
        front=0;
        rear=0;
        long long int q[10010],u;
        q[rear++]=s;
        level[s]=0;
        
        struct Edge * tr;
        while(front!=rear)
        {
        	lev++;
        	u=q[front];	
        	//blackvisited
        		tr=adjacencyList[u];
        		while (tr != NULL) 
        		{
                    if (co[tr->vertex] == -1) {
                    	co[tr->vertex]=1;
                    	level[tr->vertex]=level[u]+1;
                        q[rear++]=tr->vertex;
                    }
        	tr=tr->next;
        		}
        		front++;
        		co[u]=0;
        	
        }long long int max=0;
        //printf("%lld\n",lev)
        //for(i=1;i<=n;i++)
        //printf("%lld\n",level[i]);
        	flag++;
        	for(i=1;i<=n;i++)
        	{
        		if(level[i]>max)
        		{
        			s=i;
        			max=level[i];
        			//printf("%lld\n",i);
        			//goto start;
        		}
        	}
        	if(flag==1){
        	goto start;
        	}
       
        printf("%lld\n",max);
	// your code goes here
	return 0;
}

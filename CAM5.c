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
		long long int co[1000010],q[1000010];
	struct Edge * adjacencyList[1000010];
long long int p=1,t,n,i,k,c;
void dfs(long long int v)
{
	co[v]=1;
	struct Edge * tr;
	tr=adjacencyList[v];
	while (tr != NULL) 
        		{
                    if (co[tr->vertex] == 0) {
                    	co[tr->vertex]=1;
                        //q[rear++]=tr->vertex;
                        dfs(tr->vertex);
                    }
        	tr=tr->next;
        		}
}


int main(void) {
	
	scanf("%lld",&t);
	//scanf("%lld",&n);
	while(t--)
	{long long int v1,v2,flag=0,c=0;
		scanf("%lld%lld",&n,&k);
    for (i = 0; i < n; ++i) {
        adjacencyList[i] = NULL;
    co[i]=0;
    }
  long long int s=0,front,rear;
    for (i = 1; i <=k; ++i) {
        scanf("%lld%lld", &v1, &v2);
       adjacencyList[v1] = AddEdge(adjacencyList[v1], v2);
        adjacencyList[v2] = AddEdge(adjacencyList[v2], v1);
    }
        for(i=0;i<n;i++)
        {
        	if(co[i]==0)
        	{c++;
        	dfs(i);
        		s=i;
        	//	printf("co of %lld\n",i);
        	//	goto start;
        	}
        }
       
    printf("%lld\n",c);
  	}
	// your code goes here
	return 0;
}

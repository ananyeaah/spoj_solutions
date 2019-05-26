#include <stdio.h>
struct Edge
{
    int sr, d, w;
};
struct subset
{
     int parent;
     int rank;
};
int find(struct subset subsets[], int i)
{
    // find root and make root as parent of i (path compression)
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
 
    return subsets[i].parent;
}
void Union(struct subset subsets[], int x, int y)
{
   int xroot = find(subsets, x);
   int yroot = find(subsets, y);
    // Attach smaller rank tree under root of high rank tree
    // (Union by Rank)
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
 
    // If ranks are same, then make one as root and increment
    // its rank by one
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}
int myComp(const void* a, const void* b)
{
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->w > b1->w;
}
 int v,e,i,t,p;
 long long int path;
int main(void) {
	scanf("%d",&t);
while(t--)
{	scanf("%d",&v);
	int a,b,c,j,ki;
	struct Edge *ed;
	ed=(struct Edge*)malloc(10000000*sizeof(struct Edge));
	char s[15];
	e=0;
	for(i=0;i<v;i++)
	{
		scanf("%s",&s);
		scanf("%d",&ki);
		for(j=0;j<ki;j++)
		{
			scanf("%d%d",&b,&c);
	if(b>i){
	ed[e].sr=i;
	ed[e].d=b-1;
	ed[e].w=c;	
	e++;
	}}
		
	}
	 struct Edge result[10100];  
    //int count = 0;
     qsort(ed, e, sizeof(ed[0]), myComp);
    // for(i=0;i<e;i++)
     //printf("incres %d %d\n",ed[i].sr,ed[i].w);
    struct subset *subsets =(struct subset*) malloc( v * sizeof(struct subset) );
        for (i = 0; i < v; i++)
    	{
        	subsets[i].parent = i;
        	subsets[i].rank = 0;
    	}
	i=0;
	path=0;
	e=0;
	while(e<v-1)
	{
		struct Edge ned=ed[i++];
	int x,y,k;
		x=find(subsets,ned.sr);
		y=find(subsets,ned.d);
		if(x!=y)
		{
			//printf("%d %d\n",x,y);
			result[e++]=ned;
			path=path+ned.w;
			Union(subsets, x, y);
		}
	}
	printf("%lld\n",path);
}
	// your code goes here
	return 0;
}

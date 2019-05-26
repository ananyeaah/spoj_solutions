#include <iostream>
#include<cstdio>
#include<queue>
#include<vector>
using namespace std;
typedef pair< int, int > vii;
vector<vii > G[1000000];
//priority_queue<vii, vector< vii >, greater<ii> > Q;
priority_queue<vii,vector<vii>, greater<vii> > Q; 
int u,v,w,st,en,n,k,t,i,sz;
bool F[1000000];
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&n,&k,&st,&en);
		int D[100010]={0};
		for(i=0;i<k;i++)
		{
			scanf("%d%d%d",&u,&v,&w);
			G[u].push_back(vii(w, v));
        G[v].push_back(vii(w, u)); 
		}
		for(i=1; i<=n; i++){ D[i] = 100000;
		F[i]=0;
		}
    D[st] = 0;
    Q.push(vii(0, st));
    
    while(!Q.empty()) {
        u = Q.top().second;
        Q.pop();
        if(F[u]) continue;
        sz = G[u].size();
        for(i=0; i<sz; i++) {
            v = G[u][i].second;
            w = G[u][i].first;
            if(!F[v] && D[u]+w < D[v]) 
            {
                D[v] = D[u] + w;
                Q.push(vii(D[v], v));
            }
        }
        F[u] = 1; // done with u
    }
    //for(i=1;i<=n;i++)
    if(D[en]!=100000)
   printf("%d\n",D[en]);
   else
   printf("NONE\n");
	for(i = 1; i <= n; i++) G[i].clear();
	}
	
	// your code goes here
	return 0;
}
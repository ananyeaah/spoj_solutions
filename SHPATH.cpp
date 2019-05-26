#include <iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include <map>
using namespace std;

typedef pair< int, int > vii;
map <string,int > mp;
vector<vii > G[1000000];
char s[10000],s1[10000],s2[10000];
priority_queue<vii,vector<vii>, greater<vii> > Q; 
int D[100010],u,v,w,st,en,n,k,t,i,sz,c,r;

bool F[1000000];
void dik(int st,int en)
{
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
   printf("%d\n",D[en]);
	
}
int main(void) {
	scanf("%d",&t);
	while(t--)
	{c=1;
		scanf("%d",&n);
		for(c=1;c<=n;c++)
		{
			scanf("%s",&s);
			mp[s]=c;
			scanf("%d",&u);
			for(i=0;i<u;i++)
			{
				scanf("%d%d",&v,&w);
				G[c].push_back(vii(w, v));
				G[v].push_back(vii(w, c));
			}
		}
		scanf("%d",&r);
		for(c=1;c<=r;c++)
		{
			scanf("%s%s",&s1,&s2);
			dik(mp[s1],mp[s2]);
		}
	for(i = 1; i <= n; i++) G[i].clear();	
	}
	
	// your code goes here
	return 0;
}
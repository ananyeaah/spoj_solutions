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
int D[100010],u,v,w,st,en,n,k,t,i,sz,c,r,ti,p;
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
        int w1=Q.top().first;
        Q.pop();
        if(F[u]) 
        continue;
        sz = G[u].size();
        for(i=0; i<sz; i++) {
            v = G[u][i].second;
            w = G[u][i].first;
            if(!F[v] && D[u]+w < D[v]) 
            {
                D[v] = D[u] + w;
                Q.push(vii(D[v], v));
              //  pre[v]=u;
            }
        }
        F[u] = 1;
    }
   //printf("%d\n",D[en]);
	
}
int main(void) {
	scanf("%d%d",&n,&en);
	scanf("%d%d",&ti,&k);
	
	c=1;
	for(i=0;i<=n;i++)
	F[i]=0;
	//scanf("%d %d",&st,&en);
		for(c=1;c<=k;c++)
		{
		//	scanf("%d",&u);
				scanf("%d%d%d",&u,&v,&w);
				G[u].push_back(vii(w, v));
		}
		int ans=0;
		for(p=1;p<=n;p++)
		{
			dik(p,en);
//		printf("dis min %d\n",D[en]);
			int a1=D[en];
			if(D[en]<=ti)
				{//printf("%d\n",p);
			ans++;}
		//F[st]=0;
		//F[en]=0;
		//ik(st,en);
		//printf("%d\n",D[en]);
		}
		printf("%d\n",ans);
	for(i = 1;i<=n; i++) G[i].clear();
	scanf("%d%d",&n,&k);
	
	// your code goes here
	return 0;
}
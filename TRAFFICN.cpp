#include <iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include <map>
using namespace std;
typedef pair< int, int > vii;
//map <string,int > mp;
vector<vii > G2[1000000];
vector<vii > G1[1000000];
char s[10000],s1[10000],s2[10000];
priority_queue<vii,vector<vii>, greater<vii> > Q; 
int m,u,v,w,st,en,n,k,t,i,sz,c,r,ti,p;
long long int D1[100010],D2[100010];
bool F2[1000000];
bool F1[1000000];
void dik1(int st,int en)
{
		for(i=1; i<=n; i++){ D1[i] = 1000000000;
		F1[i]=0;
		}
    D1[st] = 0;
    Q.push(vii(0, st));
    while(!Q.empty()) {
        u = Q.top().second;
        int w1=Q.top().first;
        Q.pop();
        if(F1[u]) 
        continue;
        sz = G1[u].size();
        for(i=0; i<sz; i++) {
            v = G1[u][i].second;
            w = G1[u][i].first;
            if(!F1[v] && D1[u]+w < D1[v]) 
            {
                D1[v] = D1[u] + w;
                Q.push(vii(D1[v], v));
            }
        }
        F1[u] = 1;
    }
}
void dik2(int st,int en)
{
		for(i=1; i<=n; i++){ D2[i] = 1000000000;
		F2[i]=0;
		}
    D2[st] = 0;
    Q.push(vii(0, st));
    while(!Q.empty()) {
        u = Q.top().second;
        int w1=Q.top().first;
        Q.pop();
        if(F2[u]) 
        continue;
        sz = G2[u].size();
        for(i=0; i<sz; i++) {
            v = G2[u][i].second;
            w = G2[u][i].first;
            if(!F2[v] && D2[u]+w < D2[v]) 
            {
                D2[v] = D2[u] + w;
                Q.push(vii(D2[v], v));
            }
        }
        F2[u] = 1;
    }
}
int main(void) {
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d",&n,&m,&k,&st,&en);
	for(i=0;i<=n;i++)
	{F1[i]=0;
	F2[i]=0;
	}	for(c=1;c<=m;c++)
		{
				scanf("%d%d%d",&u,&v,&w);
				G1[u].push_back(vii(w,v));
				G2[v].push_back(vii(w,u));
		}
		dik1(st,en);
		dik2(en,st);
		int a,b,c;
		long long int ans=10000000000;
		ans=min(D1[en],D2[st]);
//		printf("%lld\n",ans);
		while(k--)
		{
			scanf("%d%d%d",&a,&b,&c);
			ans=min(ans,min(D1[a]+c+D2[b],D1[b]+c+D2[a]));
		}
		if(ans==1000000000)
		printf("-1\n");
		else
		printf("%lld\n",ans);
	for(i = 1;i<=n; i++){ 
		G1[i].clear();	G2[i].clear();
	}
//	scanf("%d%d",&n,&k);
	}// your code goes here
	return 0;
}
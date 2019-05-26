#include <iostream>
#include<cstdio>
#include<queue>
#include<vector>
#include <map>
using namespace std;
typedef pair< int, int > vii;
//map <string,int > mp;
vector<vii > G2[100000];
vector<vii > G1[100000];
vector<vii > G[100000];
//char s[10000],s1[10001],s2[10000];
priority_queue<vii,vector<vii>, greater<vii> > Q; 
int m,u,v,w,st,en,n,k,t,i,sz,c,r,ti,p,j;
long long int D1[100010],D2[100010],D[100010];
bool F2[1000000];
bool F1[1000000];
bool F[1000000];
void dik1(int st,int en)
{
		for(i=0; i<=n; i++){ D1[i] = 1000000000;
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
		for(i=0; i<=n; i++){ D2[i] = 1000000000;
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
void dik(int st,int en)
{
		for(i=0; i<=n; i++){ D[i] = 1000000000;
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
                Q.push(vii(D2[v], v));
            }
        }
        F[u] = 1;
    }
}

int main(void) {
	scanf("%d%d",&n,&m);
	while(n!=0&&m!=0)
	{
		scanf("%d%d",&st,&en);
	for(i=0;i<=n;i++)
	{F1[i]=0;
	F2[i]=0;
	F[i]=0;
	}
	int ver1[10001],ver2[10001],ver3[10001];
	for(c=0;c<m;c++)
		{
				scanf("%d%d%d",&u,&v,&w);
				ver1[c]=u;
				ver2[c]=v;
				ver3[c]=w;
				G1[u].push_back(vii(w,v));
				G2[v].push_back(vii(w,u));
		}
		dik1(st,en);
//			printf("%lld\n",D1[en]);
		dik2(en,st);
		
		for(i=0;i<m;i++)
		{
				 v = G1[ver1[i]][ver2[i]].second;
            w = G1[ver1[i]][ver2[i]].first;
	          if(D1[ver1[i]]+ver3[i]+D2[ver2[i]]!=D1[en]) 
    	        {
        	    	G[ver1[i]].push_back(vii(ver3[i],ver2[i]));
            	}	
		}
		dik(st,en);
		if(D[en]==1000000000)
		printf("-1\n");
		else
		printf("%lld\n",D[en]);
	for(i = 1;i<=n; i++){ 
		G[i].clear();
		G1[i].clear();	G2[i].clear();
	}
	for(i=0;i<=m;i++)
	{G[i].clear();
		G1[i].clear();	G2[i].clear();
		G[i].clear();
	}
	scanf("%d%d",&n,&m);
	}// your code goes here
	return 0;
}
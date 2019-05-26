#include<queue>
#include <iostream>
using namespace std;
char a[200][200];
int x,y,z,i,j,m,n,dis[200][200],t;
void bfs(int,int);
void bfs(int i,int j)
{
	queue<int> q;
	q.push(i);
	q.push(j);
	while(!q.empty())
	{
		x=q.front();
		q.pop();
		y=q.front();
		q.pop();
		if(x+1<n&&dis[x+1][y]>dis[x][y]+1)
		{
			q.push(x+1);
			q.push(y);
			dis[x+1][y]=dis[x][y]+1;
		}
		if(y+1<m&&dis[x][y+1]>dis[x][y]+1)
		{
			q.push(x);
			q.push(y+1);
			dis[x][y+1]=dis[x][y]+1;
		}
		if(x-1>=0&&dis[x-1][y]>dis[x][y]+1)
		{
			q.push(x-1);
			q.push(y);
			dis[x-1][y]=dis[x][y]+1;
		}
		if(y-1>=0&&dis[x][y-1]>dis[x][y]+1)
		{
			q.push(x);
			q.push(y-1);
			dis[x][y-1]=dis[x][y]+1;
		}
		
	}
}
int main() {
	cin>> t;
	while(t--)
	{
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin >> a[i];
			for(j=0;j<m;j++)
			dis[i][j]=100000;	
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]=='1')
				{
					dis[i][j]=0;
					bfs(i,j);
				}
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cout <<dis[i][j];
				//printf("%d",dis[i][j]);
				if(j!=m-1)
				cout << " ";
			}
			cout << endl;
		}
	}
	// your code goes here
	return 0;
}
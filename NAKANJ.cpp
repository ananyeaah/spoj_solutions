#include<queue>
#include <iostream>
using namespace std;
char a[100][100];
int x,y,z,i,j,m,n,dis[100][100],t,co[100][100];
void bfs(int,int);
int xx[10]={-1,-1,-2,-2,2,2,1,1};
    int yy[10]={-2,2,-1,1,-1,1,-2,2};
void bfs(int i,int j)
{
	co[i][j]=1;
	dis[i][j]=0;
	queue<int> q;
	q.push(i);
	q.push(j);
	while(!q.empty())
	{
		x=q.front();
		q.pop();
		y=q.front();
		q.pop();
		co[x][y]=1;
		for(i=0;i<8;i++)
		{
			if(x+xx[i]<8&&x+xx[i]>=0&&y+yy[i]<8&&y+yy[i]>=0&&(co[x+xx[i]][y+yy[i]]==-1))
			{
			q.push(x+xx[i]);
			q.push(y+yy[i]);
			co[x+xx[i]][y+yy[i]]=1;
			dis[x+xx[i]][y+yy[i]]=dis[x][y]+1;	
			}
		}
	/*	if(x+1<8&&y+2<8&&dis[x+1][y+2]==-1)
		{
			q.push(x+1);
			q.push(y+2);
			dis[x+1][y+2]=dis[x][y]+1;
		//	printf("x+1 %d y+2\n",dis[x+1][y+2]);
		}
		if(x+2<8&&y+1<8&&dis[x+2][y+1]==-1)
		{
			q.push(x+2);
			q.push(y+1);
			dis[x+2][y+1]=dis[x][y]+1;
		//	printf("x+2 %d y+1\n",dis[x+2][y+1]);
		}
		if(y+2<8&&x-1>=0&&dis[x-1][y+2]==-1)
		{
			q.push(x-1);
			q.push(y+2);
			dis[x-1][y+2]=dis[x][y]+1;
		//	printf("x-1 %d y+2\n",dis[x-1][y+2]);
		}
		if(y+1<8&&x-2>=0&&dis[x-2][y+1]==-1)
		{
			q.push(x-2);
			q.push(y+1);
			dis[x-2][y+1]=dis[x][y]+1;
		//	printf("x-2 %d y+1\n",dis[x-2][y+1]);
		}
		if(x+1<8&&y-2>=0&&dis[x+1][y-2]==-1)
		{
			q.push(x+1);
			q.push(y-2);
			dis[x+1][y-2]=dis[x][y]+1;
		//	printf("x-2 %d y+1\n",dis[x+2][y+1]);
		}
		if(x-2>=0&&y-1>=0&&dis[x-2][y-1]==-1)
		{
			q.push(x-2);
			q.push(y-1);
			dis[x-2][y-1]=dis[x][y]+1;
		}
		if(y-1>=0&&x+2<8&&dis[x+2][y-1]==-1)
		{
			q.push(x+2);
			q.push(y-1);
			dis[x+2][y-1]=dis[x][y]+1;
		}
		if(y-2>=0&&x+1<8&&dis[x+1][y-2]==-1)
		{
			q.push(x+1);
			q.push(y-2);
			dis[x+1][y-2]=dis[x][y]+1;
		}
	*/	
	}
}
int main() {
	cin>> t;
	char s1[10],s2[10];
	while(t--)
	{
		cin>>s1>>s2;
		for(i=0;i<8;i++)
		{
			//cin >> a[i];
			for(j=0;j<8;j++)
			{
				co[i][j]=-1;
				dis[i][j]=-1;
			}	
		}
		dis[s1[0]-'a'][s1[1]-'1']=0;
		bfs(s1[0]-'a',s1[1]-'1');
		cout << dis[s2[0]-'a'][s2[1]-'1']<<endl;
/*for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		cout <<dis[i][j];
		cout <<endl;
	}*/
	// you
	}
	//r code goes here
	return 0;
}
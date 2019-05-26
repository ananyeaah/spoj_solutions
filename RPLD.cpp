#include<vector>
#include<set>
#include <algorithm>
#include <iostream>
using namespace std;
int t,n,p1,p2,i,k,x=1;
int main() {
	cin >> t;
	while(t--)
	{
		set<pair<int,int> > s;
		cin >> n >> k;
		for(i=0;i<k;i++)
		{
			cin >> p1 >>p2;
			s.insert(make_pair(p1,p2));
		}
		int t2=s.size();
		/*for(i=1;i<v.size();i++)
		{
			if(v[i].second>=t2)
			{
				ans++;
				t2=v[i].first;
				t1=v[i].second;
			}
		}*/
		if(t2==k)
		cout << "Scenario #" << x <<": possible"<<endl;
		else
		cout << "Scenario #" << x <<": impossible"<<endl;
		//cout << t2 << endl;
		x++;
	}
	// your code goes here
	return 0;
}
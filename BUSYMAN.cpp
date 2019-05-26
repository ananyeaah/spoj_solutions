#include<vector>
#include <algorithm>
#include <iostream>
using namespace std;
int t,n,p1,p2,i;
int main() {
	cin >> t;
	while(t--)
	{
		vector<pair<int,int> > v;
		cin >> n;
		for(i=0;i<n;i++)
		{
			cin >> p1 >>p2;
			v.push_back(make_pair(p2,p1));
		}
		sort(v.begin(),v.end());
		int t2=v[0].first;
		int t1=v[0].second;
		int ans=1;
		for(i=1;i<v.size();i++)
		{
			if(v[i].second>=t2)
			{
				ans++;
				t2=v[i].first;
				t1=v[i].second;
			}
		}
		cout << ans << endl;
	}
	// your code goes here
	return 0;
}
#include<vector>
#include<set>
#include <algorithm>
#include <iostream>
using namespace std;
int t,n,i,k,x=1;
int p1,p2;
int main() {
	cin >> t;
	while(t--)
	{
		vector<pair<int,int> > s;
		cin >> k;
		for(i=0;i<k;i++)
		{
			cin >> p1 >> p2;
			s.push_back(make_pair(p1,0));
			s.push_back(make_pair(p2,1));
		}
		sort(s.begin(),s.end());
		int ans=0,m=0;
		for(i=0;i<s.size();i++)
		{
	//		cout << s[i].second<<"  "<<s[i].first<<endl;
	//		printf("%d %d\n",s[i].second,s[i].first);
			if(s[i].second==0)
			{
				ans++;
			}
			else
			{
				ans--;
			}
			if(ans>m)
			{
				m=ans;
			}
		}
		
		//cout << "Scenario #" << x <<": possible"<<endl;
		//else
		//cout << "Scenario #" << x <<": impossible"<<endl;
		cout << m << endl;
	}
	// your code goes here
	return 0;
}
#include <iostream>
#include <map>
using namespace std;
map <int,int > mp;
int n,k,i,t,newe=0,homo=0;
int main() {
	cin >> t;
	char s[50];
	while(t--)
	{
		cin >> s >> n;
		if(s[0]=='i')
		{
			if(mp[n]==0)
			{
				newe++;
			}
			else
			{
				homo++;
			}
			mp[n]++;
		}
		else if(mp[n]!=0)
		{
			if(mp[n]==1)
			{
				newe--;
			}
			else
			{
				homo--;
			}
			mp[n]--;
		}
		if(newe>1&&homo>0)
		cout << "both" <<endl;
//		printf("both\n");
		else if(newe>1)
		cout << "hetero" <<endl;
//		printf("hetero\n");
		else if(homo>0)
		cout << "homo" <<endl;
//		printf("homo\n");
		else
		cout << "neither" <<endl;
//		printf("neither\n");
	}
	// your code goes here
	return 0;
}
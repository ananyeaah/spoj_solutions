#include <iostream>
#include <set>
using namespace std;
int main() {
	multiset<int> s;
	multiset<int>::iterator it;
	long long int sum;
	int n,k,x,i;
	cin >> n;
	sum=0;
	while(n--)
	{
		cin >> k;
		for(i=0;i<k;i++)
		{
			cin >> x;
			s.insert(x);
		}
		int min=*s.begin();
	//	s.erase(min);
		int max=*s.rbegin();
	//	s.erase(max);
		std::multiset<int>::iterator hit(s.find(min));
		s.erase(hit);
		std::multiset<int>::iterator hit1(s.find(max));
		s.erase(hit1);
		//cout << max <<" " << min <<n <<endl;
		sum+=max-min;
		
	}
	cout << sum <<endl;
	// your code goes here
	return 0;
}
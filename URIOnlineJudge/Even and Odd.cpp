#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> odd,even;
	vector <int>::iterator it;
	int t,tmp;
	cin>>t;
	while (t--)
	{
		cin>>tmp;
		if (tmp%2)
			odd.push_back(tmp);
		else
			even.push_back(tmp);
	}
	sort(even.begin(), even.end());
	sort(odd.rbegin(), odd.rend());
	for (it=even.begin();it!=even.end();it++)
		cout<<*it<<endl;
	for (it=odd.begin();it!=odd.end();it++)
		cout<<*it<<endl;
	
	return 0;
}

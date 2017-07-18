#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	int t,n,tmp;
	cin>>t;
	while (t--)
	{
		cin>>n;
		map <int,int> m;
		map <int,int>::iterator it;
		while (n--)
		{
			cin>>tmp;
			m[tmp]++;
		}
		it=m.begin();
		if (it->second%2)
			cout<<"Lucky\n";
		else
			cout<<"Unlucky\n";
	}
    
    return 0;
}

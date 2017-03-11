#include <bits/stdc++.h>
using namespace std;
 
int main()
{
		int t,n,k,i,p;
		string tmp;
		cin>>t;
		while (t--)
		{
			cin>>n>>k;
			set <string> s;
			while (n--)
			{
				cin>>p;
				while (p--)
				{
					cin>>tmp;
					s.insert(tmp);
				}
			}
			if (s.size()>=k)
				cout<<"Yes\n";
			else
				cout<<"No\n";
		}
    return 0;
}

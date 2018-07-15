#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	string a,b;
	while (t--)
	{
	    map <char, int> m;
	    map <char, int>::iterator it;
		cin>>a>>b;
		for (i=0;i<a.length();i++)
		{
			m[a[i]]++;
		}
		for (i=0;i<b.length();i++)
		{
			m[b[i]]--;
		}
		int f=0;
		for (auto it:m)
		{
			if (it.second!=0)
			{
				f=1;
			}
		}
		if (f)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	string a,b;
	cin>>t;
	int res=0;
	while (t--)
	{
		map <char,int> m;
		map <char,int>::iterator it;
		res=0;
		cin>>a>>b;
		for (i=0;i<a.length();i++)
		{
			m[a[i]]++;
		}
		for (i=0;i<b.length();i++)
		{
			m[b[i]]--;
		}
		for (it=m.begin();it!=m.end();it++)
		{
			res+=abs(it->second);
		}
		cout<<res<<endl;
	}
    return 0;
}

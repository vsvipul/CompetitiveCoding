#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	string str;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cin>>str;
		map <char,int> m;
		for (i=0;i<n;i++)
		{
			m[str[i]]++;
		}
		if (m['I']>=1 && m['E']>=4 && m['C']>=1 && m['O']>=1 && m['D']>=1 && m['S']>=1 && m['A']>=2 && m['N']>=1 && m['G']>=1 && m['M']>=1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}

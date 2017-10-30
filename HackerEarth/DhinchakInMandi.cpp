#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t,n,i;
	cin>>t;
	while (t--)
	{
		string str;
		map <char,int> m;
		map <char,int>::iterator it;
		cin>>n;
		cin>>str;
		m['m']=0;
		m['a']=0;
		m['n']=0;
		m['d']=0;
		m['i']=0;
		m['M']=0;
		m['A']=0;
		m['N']=0;
		m['D']=0;
		m['I']=0;
		for (i=0;i<str.length();i++)
			m[str[i]]++;
		cout<<min(m['m']+m['M'],min(m['a']+m['A'],min(m['n']+m['N'],min(m['d']+m['D'],m['i']+m['I']))))<<endl;
	}
	return 0;
}
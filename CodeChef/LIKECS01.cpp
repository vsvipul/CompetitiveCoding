#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	string str;
	while (t--)
	{
		map <char,int> m;
		map <char,int>::iterator it;
		cin>>str;
		for (i=0;i<str.length();i++)
		{
			m[str[i]]++;
		}
		int f=0;
		for (it=m.begin();it!=m.end();it++)
		{
			if ((it->second)>1)
				f=1;
		}
		if (f)
			cout<<"yes\n";
		else
			cout<<"no\n";
	}
    return 0;
}
 

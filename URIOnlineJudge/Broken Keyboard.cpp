#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	string str;
	while (cin>>str)
	{
		list <char> res;
		list <char>::iterator it=res.begin();
		for (i=0;i<str.length();i++)
		{
			if (str[i]=='[')
				it=res.begin();
			else if (str[i]==']')
				it=res.end();
			else
				res.insert(it,str[i]);
		}
		for (it=res.begin();it!=res.end();it++)
			cout<<*it;
		cout<<endl;
	}
	return 0;
}

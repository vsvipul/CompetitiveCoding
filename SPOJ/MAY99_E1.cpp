#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
	string str;
	cin>>str;
	map <char,int> m;
	for (i=0;i<str.length();i++)
	{
		m[str[i]]++;
	}
	int max=0;
	char res;
	map <char,int>:: iterator it;
	for (it=m.begin();it!=m.end();it++)
	{
		if (it->second>max)
		{
			max=it->second;
			res=it->first;
		}
	}
	cout<<res<<'\n';
    return 0;
}

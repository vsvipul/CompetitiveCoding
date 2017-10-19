#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	string str;
	cin.ignore();
	while (t--)
	{
		getline(cin,str);
		map <char,int> m;
		map <char,int>::iterator it;
		for (i=0;i<str.length();i++)
		{
			if (str[i]>='a' && str[i]<='z')
				m[str[i]]++;
			else if (str[i]>='A' && str[i]<='Z')
				m[str[i]-'A'+'a']++;
		}
		int max=INT_MIN;
		for (it=m.begin();it!=m.end();it++)
		{
			if (it->second>max)
				max=it->second;
		}
		for (it=m.begin();it!=m.end();it++)
		{
			if (it->second==max)
				cout<<(it->first);
		}
		cout<<endl;
	}
    return 0;
}

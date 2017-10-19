#include <bits/stdc++.h>
using namespace std;

int cmp(string a, string b)
{
	int i,match=0;
	for (i=0;i<a.length();i++)
	{
		if (a[i]==b[i])
			match++;
	}
	return (match>=a.size()-1);
}

int fnc(string a)
{
	if (a.length()==5)
		return 3;
	else if (cmp(a,"one"))
		return 1;
	return 2;
}

int main()
{
	int t;
	cin>>t;
	string a;
	while (t--)
	{
		cin>>a;
		cout<<fnc(a)<<endl;
	}	
    return 0;
}

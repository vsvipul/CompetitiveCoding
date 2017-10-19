#include <bits/stdc++.h>
using namespace std;

string fnc(string str, int shift)
{
	int i,n=str.length();
	for (i=0;i<n;i++)
	{
		if (str[i]-shift>='A' && str[i]-shift<='Z')
			str[i]=str[i]-shift;
		else 
			str[i]=str[i]-shift+26;
	}
	return str;
}

int main()
{
	int t,shift;
	string str;
	cin>>t;
	while (t--)
	{
		cin>>str;
		cin>>shift;
		cout<<fnc(str,shift)<<"\n";
	}
    return 0;
}

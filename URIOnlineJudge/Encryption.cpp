#include <bits/stdc++.h>
using namespace std;

string fnc(string str)
{
	int i,n=str.length();
	for (i=0;i<n;i++)
	{
		if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
			str[i]=str[i]+3;
	}
	string res=str;
	reverse(res.begin(),res.end());
	for (i=n/2;i<n;i++)
	{
		res[i]=res[i]-1;
	}
	return res;
}

int main()
{
	int n;
	cin>>n;
	string str;
	cin.ignore();
	while (n--)
	{
		getline(cin,str);
		cout<<fnc(str)<<"\n";
	}
    return 0;
}

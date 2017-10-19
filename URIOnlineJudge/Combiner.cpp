#include <bits/stdc++.h>
using namespace std;

string fnc(string a, string b)
{
	int i=0,j=0,p=a.length(),q=b.length();
	string res="";
	while (1)
	{
		if (i<p)
		{
			res+=a[i];
			i++;
		}
		if (j<q)
		{
			res+=b[j];
			j++;
		}
		if (i==p && j==q)
			break;
	}
	return res;
}

int main()
{
	int t;
	cin>>t;
	string a,b;
	while (t--)
	{
		cin>>a>>b;
		cout<<fnc(a,b)<<endl;
	}	
    return 0;
}

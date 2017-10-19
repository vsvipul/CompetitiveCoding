#include <bits/stdc++.h>
using namespace std;

string fnc(string a, string b)
{
	int i,j,p=a.length(),q=b.length();
	j=p-1;
	for (i=q-1;i>=0;i--)
	{
		if (b[i]==a[j])
			j--;
		else
			break;
	}
	if (i==-1)
		return "encaixa";
	return "nao encaixa";
}

int main()
{
	string a,b;
	int t;
	cin>>t;
	while (t--)
	{
		cin>>a>>b;
		cout<<fnc(a,b)<<endl;
	}
    return 0;
}

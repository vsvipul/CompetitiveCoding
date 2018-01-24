#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b;
	cin>>a>>b;
	int i,f=0;
	for (i=0;i<a.length();i++)
	{
		if (a[i]<b[i])
		{
			f=1;
			break;
		}
	}
	if (f)
		cout<<"-1\n";
	else
		cout<<b<<"\n";
	return 0;
}

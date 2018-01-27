#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	cin>>str;
	int i=0,j=str.length()-1,diff=0;
	while (i<=j)
	{
		if (str[i]!=str[j])
			diff++;
		i++;
		j--;
	}
	if (str.length()%2)
	{
		if (diff<=1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	else
	{
		if (diff==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

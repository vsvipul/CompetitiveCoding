#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,i,j;
	cin>>n>>k;
	string str;
	cin>>str;
	string toremove="abcdefghijklmnopqrstuvwxyz";
	for (i=0;i<26 && k;i++)
	{
		for (j=0;j<n && k;j++)
		{
			if (str[j]==toremove[i])
			{
				k--;
				str[j]='#';
			}
		}
	}
	for (i=0;i<n;i++)
	{
		if (str[i]!='#')
			cout<<str[i];
	}
	cout<<endl;
	return 0;	
}

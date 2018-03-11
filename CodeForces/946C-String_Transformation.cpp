#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	string str;
	cin>>str;
	int n=str.length();
	string toform="abcdefghijklmnopqrstuvwxyz";
	int i,j=n-1,tmp=0;
	for (i=25;i>=0;i--)
	{
		while (j>=0)
		{
			if (str[j]<=toform[i])
			{
				str[j]=toform[i];
				j--;
				tmp++;
				break;
			}
			j--;
		}
	}
	if (tmp<26)
		cout<<"-1\n";
	else
		cout<<str<<"\n";
	return 0;
}

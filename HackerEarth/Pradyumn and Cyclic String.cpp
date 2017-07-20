#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n;
	cin>>t;
	string str;
	while (t--)
	{
		cin>>str;
		n=str.length();
		cout<<(n*(n+1))/2<<endl;
	}
    return 0;
}

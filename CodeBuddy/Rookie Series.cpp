#include <bits/stdc++.h>
using namespace std;

int main() 
{
	std::ios::sync_with_stdio(false);
	int t,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		n--;
		int res=(n>>1)^n;
		cout<<res<<endl;
	}
	return 0;
}

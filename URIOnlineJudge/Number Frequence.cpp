#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int n,t;
	cin>>n;
	map <int,int> m;
	map <int,int>::iterator it;
	while (n--)
	{
		cin>>t;
		m[t]++;
	}
	for (it=m.begin();it!=m.end();it++)
		cout<<(it->first)<<" aparece "<<(it->second)<<" vez(es)\n";
	return 0;
}

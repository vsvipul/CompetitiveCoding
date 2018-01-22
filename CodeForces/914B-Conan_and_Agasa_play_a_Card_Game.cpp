#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tmp,n,i,f=0;
	cin>>n;
	map <int,int> m;
	map <int,int>::reverse_iterator it;
	for (i=0;i<n;i++)
	{
		cin>>tmp;
		m[tmp]++;
	}
	for (it=m.rbegin();it!=m.rend();it++)
	{
		if ((it->second)%2)
			f=1;
	}
	if (!f)
		cout<<"Agasa\n";
	else
		cout<<"Conan\n";
	return 0;
}

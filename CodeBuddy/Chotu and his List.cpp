#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int tmp,i,n,m,p,q,a,b,res=0;
	cin>>n>>m;
	vector <int> v;
	for (i=0;i<n;i++)
	{
		cin>>tmp;
		v.push_back(2*tmp);
	}
	sort(v.begin(),v.end());
	while (m--)
	{
		cin>>p>>q;
		a=p+q;
		b=p-q;
		if (binary_search(v.begin(),v.end(),a) && binary_search(v.begin(),v.end(),b))
	   		res++;
	}
	cout<<res;
    return 0;
}

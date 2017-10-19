#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,i;
		double pr;
		string str;
		cin>>n;
		map <string, double> m;
		for (i=0;i<n;i++)
		{
			cin>>str>>pr;
			m[str]=pr;
		}
		int mo,c;
		cin>>mo;
		double total=0;
		while (mo--)
		{
			cin>>str>>c;
			total+=m[str]*c;
		}
		cout<<"R$ "<<fixed<<setprecision(2)<<total<<endl;
	}
	return 0;
}

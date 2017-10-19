#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,total;
	string str;
	cin>>t;
	cin.ignore();getline(cin,str);
	for (i=0;i<t;i++)
	{
		map <string, int> m;
		total=0;
		while (getline(cin,str) && str!="")
		{
			m[str]++;
			total++;
		}
		map <string, int>::iterator it;
		for (it=m.begin();it!=m.end();it++)
			cout<<fixed<<setprecision(4)<<(it->first)<<" "<<((double) (it->second)*100)/((double) total)<<endl; 
		if (i!=t-1)
		    cout<<"\n";
	}
	return 0;
}

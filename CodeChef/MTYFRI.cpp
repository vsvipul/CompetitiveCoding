#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t,n,k,i,tmp;
	cin>>t;
	while (t--)
	{
		cin>>n>>k;
		vector <int> t,m;
		for (i=0;i<n;i++)
		{
			cin>>tmp;
			if (i%2)
				t.push_back(tmp);
			else
				m.push_back(tmp);
		}
		sort(t.begin(),t.end());
		sort(m.begin(),m.end());
		int toswap=m.size()-1,i=0;
		while (k--)
		{
			if (m[toswap]>t[i])
			{
				swap(m[toswap],t[i]);
				toswap--;
				i++;
			}
			else
				break;
		}
		int tsum=0,msum=0;
		for (i=0;i<m.size();i++)
			msum+=m[i];
		for (i=0;i<t.size();i++)
			tsum+=t[i];
		if (tsum>msum)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
    return 0;
}

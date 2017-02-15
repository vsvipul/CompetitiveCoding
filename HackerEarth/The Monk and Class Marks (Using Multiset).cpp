#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,marks;
    string s;
    cin>>n;
    map < int, multiset<string> > m;
    map < int, multiset<string> >::iterator it;
    multiset<string>:: iterator it1;
    for (i=0;i<n;i++)
    {
    	cin>>s>>marks;
    	m[marks].insert(s);
    }
    it=m.end();
    it--;
    for (;it!=m.begin();it--)
    {
    	for (it1=it->second.begin();it1!=it->second.end();++it1)
    	{
    		cout<<*it1<<" "<<it->first<<'\n';
    	}
    }
    for (it1=it->second.begin();it1!=it->second.end();++it1)
    {
        cout<<*it1<<" "<<it->first<<'\n';
    }
    return 0;
}

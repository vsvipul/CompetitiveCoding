#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,tmp;
    cin>>n;
    vector <int> v;
    for (i=0;i<n;i++)
    {
    	cin>>tmp;
    	v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    for (auto i:v)
    	cout<<i<<"\n";
    return 0;
}

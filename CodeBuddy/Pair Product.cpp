#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i;
    long long int k,temp,res=0;
    cin>>n>>k;
    vector <long long int> v;
    vector <long long int>::iterator it;
    for (i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    for (i=0;i<n;i++)
    {
            it=lower_bound(v.begin()+i+1,v.end(),((double) k)/((double) v[i]));
            res+=v.end()-it;
    }
    cout<<res<<'\n';
    return 0;
}

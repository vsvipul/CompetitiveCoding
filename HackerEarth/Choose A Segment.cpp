#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    long long int k,temp,i;
    cin>>t;
    while (t--)
    {
        vector <long long int> v;
        vector <long long int>:: iterator it;
        cin>>n>>k;
        for (i=0;i<n;i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(),v.end());
        int res=0;
        for (i=0;i<n;i++)
        {
            it=lower_bound(v.begin()+i,v.end(),k+v[i]);
            temp=(it-v.begin())-i;
            if (temp>res)
                res=temp;
        }
        cout<<res<<'\n';
    }
    return 0;
}

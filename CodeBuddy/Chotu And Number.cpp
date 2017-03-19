#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    ll n,res;
    cin>>t;
    while (t--)
    {
        cin>>n;
        res=n/3+n/5-n/15;
        cout<<res<<"\n";
    }
}

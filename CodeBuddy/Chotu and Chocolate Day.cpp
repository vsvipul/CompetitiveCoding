#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,k,res;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        res=((n*(n-1)*(n+k-1))/2)+n*k;
        cout<<res<<endl;
    }
    return 0;
}

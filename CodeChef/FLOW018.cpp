#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    long long int res;
    cin>>t;
    while (t--)
    {
        res=1;
        cin>>n;
        for (i=1;i<=n;i++)
            res*=i;
        cout<<res<<endl;
    }
    return 0;
}

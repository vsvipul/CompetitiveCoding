#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int res,t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        res=((n-1)*(n-2))/2;
        cout<<res<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,k,temp,min;
    cin>>t;
    while (t--)
    {
        min=INT_MAX;
        cin>>n>>k;
        while (n--)
        {
            cin>>temp;
            if (temp<min)
                min=temp;
        }
        if (k>min)
            cout<<k-min<<'\n';
        else
            cout<<"0\n";
    }
    return 0;
}

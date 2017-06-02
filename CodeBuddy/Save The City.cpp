#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,i,tmp;
    long long int prod;
    cin>>t;
    while (t--)
    {
        prod=1;
        cin>>n>>m;
        for (i=0;i<n;i++)
        {
            cin>>tmp;
            prod=((prod%m)*(tmp%m))%m;
        }
        cout<<prod<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    vector <ll> v;
    ll n,i,j,k,temp,flag;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>temp;
        v.push_back(temp);
    }
    ll res=0;
    for (i=0;i<32;i++)
    {
        k=0;
        for (j=0;j<n;j++)
        {
            temp=v[j];
            if (1&(temp>>i))
                k++;
        }
        if (k==n || k==0)
        	flag=0;
        else
        	flag=1;
        res+=(1<<i)*flag;
    }
    cout<<res;
    return 0;
}

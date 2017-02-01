#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    ll r,g,b;
    ll res=0;
    cin>>r>>g>>b;
    ll maxn,smaxn,minn;
    ll temp1=max(r,g);
    ll temp2=min(r,g);
    maxn=max(temp1,b);
    minn=min(temp2,b);
    smaxn=r+g+b-(maxn+minn);
    if (smaxn-minn>1)
    {
        res+=(smaxn-minn)/2;
        smaxn-=((smaxn-minn)/2)*2;
    }
    if (maxn-smaxn>1)
    {
        res+=(maxn-smaxn)/2;
        maxn-=((maxn-smaxn)/2)*2;
    }
    
    ll temp3=max(maxn,smaxn);
    res+=max(temp3,minn);
    cout<<res;
    return 0;
}

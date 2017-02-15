#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,res,n;
    char temp;
    cin>>t;
    while (t--)
    {
        cin>>n;
        res=n;
        temp='?';
        while (temp!='=')
        {
            cin>>temp;
            if (temp=='=') break;
            cin>>n;
            if (temp=='+')
            {
                res+=n;
            }
            else if (temp=='-')
            {
                res-=n;
            }
            else if (temp=='*')
            {
                res*=n;
            }
            else if (temp=='/')
            {
                res/=n;
            }
        }
        cout<<res<<'\n';
    }	
    return 0;
}

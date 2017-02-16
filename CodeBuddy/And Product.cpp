#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,a,b,bit,res;
    cin>>t;
    while (t--)
    {
        bit=0;
        cin>>a>>b;
        while (a!=b)
        {
            a=a>>1;
            b=b>>1;
            bit++;
        }
        res=a<<bit;
        cout<<res<<'\n';
    }
    return 0;
}

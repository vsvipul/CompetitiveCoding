#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,res;
    cin>>t;
    while (t--)
    {
        res=0;
        cin>>n;
        while (n!=0)
        {
            if (n%2==1)
                res++;
            n/=2;
        }
        cout<<res<<endl;
    }    
    return 0;
}

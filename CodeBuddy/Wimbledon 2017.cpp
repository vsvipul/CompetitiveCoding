#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,b,p,match,res1,res2;
    cin>>t;
    while (t--)
    {
        match=0;
        cin>>n>>b>>p;
        res2=n*p;
        while (n>1)
        {
            match+= (int) log2(n);
            n-= (int) log2(n);
        }
        res1= (2*b+1)*match;
        cout<<res1<<" "<<res2<<"\n";
    }
}

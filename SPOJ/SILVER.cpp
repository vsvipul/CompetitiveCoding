#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,res;
    while(1)
    {
        cin>>n;
        if (n==0) break;
        res=0;
        while(n!=0)
        {
            n/=2;
            res++;
        }
        cout<<res-1<<"\n";
    }
    return 0;
}

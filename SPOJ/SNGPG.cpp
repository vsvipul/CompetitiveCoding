#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        if (a<4)
            cout<<min(b+1,4)-a<<"\n";
        else
            cout<<"0\n";
    }
    return 0;
}

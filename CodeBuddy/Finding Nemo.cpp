#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y;
    cin>>t;
    while (t--)
    {
        cin>>n;
        y=n/65536;
        x=n-y*65536;
        cout<<x<<" "<<y<<"\n";
    }
    return 0;
}

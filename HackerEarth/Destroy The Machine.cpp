#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,d,x;
    cin>>t>>d>>x;
    if (x>=t+d)
    {
        if ((x-t)%d==0 || (x-t)%d==1)
            cout<<"YES";
        else
            cout<<"NO";
    }
    else
    {
        if (t==x)
            cout<<"YES";
        else
            cout<<"NO";
    }
    return 0;
}

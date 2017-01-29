#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int x,y,z,res;
    while (1)
    {
        cin>>x>>y>>z;
        if (x==0&&y==0&&z==0)
            break;
        if (y*y==x*z)
        {
            res=z*(z/y);
            cout<<"GP "<<res<<'\n';
        }  
        else
        {
            res=z+(z-y);
            cout<<"AP "<<res<<'\n';
        }
    }
    return 0;
}

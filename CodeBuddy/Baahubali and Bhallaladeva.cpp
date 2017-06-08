#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,tmp,n,i;
    double bahu,bhala;
    cin>>t;
    while (t--)
    {
        bahu=0;bhala=0;
        cin>>n;
        for (i=0;i<n;i++)
        {
            cin>>tmp;
            bahu+=log(tmp);
        }
        for (i=0;i<n;i++)
        {
            cin>>tmp;
            bhala+=log(tmp);
        }
        if (bahu>bhala)
            cout<<"Baahubali\n";
        else if (bahu<bhala)
            cout<<"Bhallaldeva\n";
        else
            cout<<"Tie\n";
    }
    return 0;
}

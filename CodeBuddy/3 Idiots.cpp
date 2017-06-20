#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j;
    string a,b;
    cin>>t;
    while (t--)
    {
        j=0;
        cin>>a>>b;
        for (i=0; i<a.length(); i++)
        {
            if (a[i]==b[j])
                j++;
        }
        if (j==b.length())
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}

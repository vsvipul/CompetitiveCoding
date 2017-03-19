#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool issub(string a, string b)
{
    int i,j=0;
    for (i=0;i<a.length() && j<b.length();i++)
    {
        if (a[i]==b[j])
            j++;
    }
    return (j==b.length());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string b,str;
    int k,wins,t;
    cin>>b>>k;
    cin>>t;
    while (t--)
    {
        cin>>str;
        if (issub(b,str))
            wins++;
    }
    if (wins>=k)
        cout<<wins<<" LUCKY\n";
    else
        cout<<wins<<" UNLUCKY\n";
}

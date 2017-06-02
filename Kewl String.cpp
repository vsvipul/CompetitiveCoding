#include <bits/stdc++.h>
using namespace std;

int check(string str)
{
    int i,j,n=str.length();
    string alp="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string salp="abcdefghijklmnopqrstuvwxyz";
    int freq[26]={0};
    for (i=0;i<n;i++)
    {
        for (j=0;j<26;j++)
        {
            if (str[i]==alp[j] || str[i]==salp[j])
            {
                freq[j]++;
            }
        }
    }
    for (i=0;i<26;i++)
    {
        if (freq[i]==0)
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    string str;
    cin>>t;
    while (t--)
    {
        cin>>str;
        if (check(str))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}

#include <bits/stdc++.h>
#define N 41
using namespace std;

bool check(string str)
{
    unsigned int i,temp=0;
    for (i=0;i<str.length();i++)
    {
        temp=temp*10+(str[i]-'0');
        if (temp>=N)
            temp%=N;
    }
    return !temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t,c,n,a,b,i;
    string str;
    cin>>t;
    while (t--)
    {
        str="";
        cin>>a>>b>>c>>n;
        int arr[n];
        arr[0]=a;
        arr[1]=b;
        for (i=2;i<n;i++)
        {
            arr[i]=(((arr[i-1])*c)+arr[i-2])%10;
        }
        for (i=0;i<n;i++)
        {
            str+=(char) arr[i]+48;
        }
        if (check(str))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}

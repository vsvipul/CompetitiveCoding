#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    long long int tmp,w,sum;
    cin>>t;
    while (t--)
    {
        sum=0;
        cin>>n>>w;
        for (i=0;i<n;i++)
        {
            cin>>tmp;
            sum+=tmp;
        }
        if (w==sum)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}

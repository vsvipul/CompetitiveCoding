#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int tmp,res=0;
    while (n--)
    {
        cin>>tmp;
        res+=tmp;
    }
    cout<<res<<"\n";
    return 0;
}

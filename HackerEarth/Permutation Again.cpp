#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    long long int n;
    while (t--)
    {
        cin>>n;
        if (n!=1)
            cout<<((n*n)/2)-1<<"\n";
        else
            cout<<"1\n";
    }
    return 0;
}

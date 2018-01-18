#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b;
    cin>>t;
    string str;
    while (t--)
    {
        cin>>str>>a>>b;
        sort(str.begin()+a, str.begin()+b+1, greater<int>());
        cout<<str<<"\n";
    }
    return 0;
}

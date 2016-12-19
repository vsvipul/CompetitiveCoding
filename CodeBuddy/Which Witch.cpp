#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    double s;
    cin>>t;
    while (t--)
    {
        cin>>s>>n;
        if ((s>1)&&(n>1))
            cout<<n<<endl;
        else 
            cout<<1<<endl;
    }
    return 0;
}

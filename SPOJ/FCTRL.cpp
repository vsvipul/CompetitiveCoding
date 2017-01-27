#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,res;
    cin>>t;
    while (t--)
    {
        res=0;
        cin>>n;
        for (i=5;n>1;i*=5)
            {
                res+=n/5;
                n/=5;
            }
        cout<<res<<'\n';
    }
    return 0;
}

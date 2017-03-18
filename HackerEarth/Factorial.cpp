#include <iostream>
#define MOD 1000000007
#define ll long long int
using namespace std;

ll fac[100001];
void fact()
{
    int i;
    fac[0]=1;
    fac[1]=1;
    for (i=2;i<100001;i++)
        fac[i]=((fac[i-1]%MOD)*(i%MOD))%MOD;
}

int main()
{
    fact();
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<fac[n]<<endl;
    }
    return 0;
}

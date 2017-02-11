#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    long long int third,thirdl,sum,d,n,a,i,temp;
    cin>>t;
    while (t--)
    {
        cin>>third>>thirdl>>sum;
        n=(2*sum)/(third+thirdl);
        if (n!=5)
            d=(thirdl-third)/(n-5);
        else
            d=0;
        a=third-2*d;
        cout<<n<<'\n';
        for (i=0;i<n;i++)
        {
            temp=a+i*d;
            cout<<temp<<" ";
        }
        cout<<'\n';
    }
    return 0;
}

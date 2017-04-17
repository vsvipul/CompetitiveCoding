#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,dig,max,n,flag;
    cin>>t;
    while (t--)
    {
        flag=1;
        max=0;
        cin>>n;
        while (n!=0)
        {
            dig=n%10;
            if (dig!=0 || dig!=1)
            {
                flag=0;
                if (dig>max)
                    max=dig;
            }
            n/=10;
        }
        if (flag==1)
            cout<<1<<endl;
        else
            cout<<max<<endl;
    }
    return 0;
}

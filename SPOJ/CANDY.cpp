#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,sum,avg,res;
    while (1)
    {
        cin>>n;
        if (n==-1)
            break;
        sum=0;
        res=0;
        int arr[n];
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if (sum%n==0)
        {
            avg=sum/n;
            for (i=0;i<n;i++)
            {
                if (arr[i]>avg)
                    res+=arr[i]-avg;
            }
            cout<<res<<'\n';
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int i,arr[n];
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    int sum1=0;
    for (i=0;i<n;i++)
    {
        sum1+=i+1;
    }
    if (sum==sum1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

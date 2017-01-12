#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l,r,flag=0;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    sort(arr,arr+n);
    for (i=0;i<n-2;i++)
    {
        l=i+1;
        r=n-1;
        while (l<r)
        {
            if (arr[i]+arr[l]+arr[r]==k)
            {
                flag=1;break;
            }
            else if (arr[i]+arr[l]+arr[r]<k)
                l++;
            else
                r--;
        }
    }
    if (flag==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

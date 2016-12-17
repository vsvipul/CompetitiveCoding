#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],arr1[n],i;
    for (i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for (i=0;i<n;i++)
        arr1[i]=arr[n-i-1];
    cout<<arr1[0]<<" ";
    for (i=1;i<n;i++)
    {
        if (arr1[i]!=arr1[i-1])
            cout<<arr1[i]<<" ";
    }
    return 0;
}

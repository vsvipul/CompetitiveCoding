#include <bits/stdc++.h>
using namespace std;

int arr[100001];
bool check(int mid, int n, int c)
{
    int placed=1;
    int i;
    int last=arr[0];
    for (i=1;i<n;i++)
    {
        if (arr[i]-last>=mid)
        {
            placed++;
            if (placed==c)
                return true;
            last=arr[i];
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,c,i;
    cin>>t;
    while (t--)
    {
        cin>>n>>c;
        for (i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int low=0;
        int high=arr[n-1]-arr[0];
        int mid;
        while (high-low>1)
        {
            mid=low+(high-low)/2;
            if (check(mid,n,c))
                low=mid;
            else
                high=mid;
        }
        cout<<low<<'\n';
    }
    return 0;
}

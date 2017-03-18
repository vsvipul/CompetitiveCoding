#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,i,j,flag,first;
    cin>>m;
    int arr[m];
    for (i=0;i<m;i++)
        cin>>arr[i];
    sort(arr,arr+m);
    int min=INT_MAX;
    for (i=1;i<m;i++)
    {
        if (arr[i]-arr[i-1]<min)
            min=arr[i]-arr[i-1];
    }
    for (i=2;i<=min;i++)
    {
        flag=0;
        first=arr[0]%i;
        for (j=1;j<m;j++)
        {
            if (arr[j]%i!=first)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            cout<<i<<" ";
    }
    return 0;
}

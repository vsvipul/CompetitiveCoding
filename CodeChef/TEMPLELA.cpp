#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,i,res,max;
    cin>>t;
    while (t--)
    {
        max=0;
        res=0;
        cin>>n;
        int arr[n];
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
            if (arr[i]>max)
                max=arr[i];
        }
        if (arr[0]==1 && n%2==1 && arr[n/2]==max)
        {
            res=1;
            for (i=1;i<n/2;i++)
            {
                if (arr[i]-arr[i-1]!=1)
                {
                    res=0;
                    break;
                }
            }
            for (i=n/2;i<n-1;i++)
            {
                if (arr[i]-arr[i+1]!=1)
                {
                    res=0;
                    break;
                }
            }
        }
        if (res==0)
            printf("no\n");
        else
            printf("yes\n");
    }
    return 0;
}
 

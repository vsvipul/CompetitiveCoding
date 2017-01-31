
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,c,i,min,temp;
    cin>>t;
    while (t--)
    {
        min=INT_MAX;
        cin>>n>>c;
        int arr[n];
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
            temp=c-arr[i];
            if (abs(temp)<min)
                min=abs(temp);
        }
        cout<<min<<'\n';
    }
    return 0;
}

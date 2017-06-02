#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int arr[100001]={0};
    arr[1]=1;
    long long int i,cur=1,sum,step=2;
    for (i=3;i<100001;i+=2)
    {
        sum=0;
        cur+=step;
        sum+=cur;
        int x=3;
        while (x--)
        {
            cur+=step;
            sum+=cur;
        }
        arr[i]=arr[i-2]+sum;
        step+=2;
    }
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        cout<<arr[n]<<endl;;
    }
    return 0;
}

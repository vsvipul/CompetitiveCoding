#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    int arr[100002];
    arr[0]=1;
    arr[1]=1;
    for (i=2;i<=100001;i++)
    	{
    		arr[i]=(arr[i-1]%MOD+arr[i-2]%MOD)%MOD;
    	}
    while (t--)
    {
    	int n;
    	cin>>n;
    	cout<<(arr[n]+arr[n-1])%MOD<<endl;
    }
    return 0;
}

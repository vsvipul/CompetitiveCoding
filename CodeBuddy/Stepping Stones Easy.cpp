#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    	int n;
    	cin>>n;
    	int arr[n+1];
    	int i;
    	arr[0]=1;
    	arr[1]=1;
    	for (i=2;i<=n;i++)
    	{
    		arr[i]=arr[i-1]+arr[i-2];
    	}
    	cout<<arr[n]+arr[n-1]<<endl;
    }
    return 0;
}

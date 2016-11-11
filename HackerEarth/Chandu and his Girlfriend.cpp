#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while (t--)
    {
    	cin>>n;
    	int arr[n];
    	for (i=0;i<n;i++)
    		cin>>arr[i];
		sort(arr,arr+n);
		for (i=0;i<n;i++)
		{
			cout<<arr[n-i-1]<<" ";
		}
		cout<<endl;
    }
    return 0;
}

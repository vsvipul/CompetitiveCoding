#include <iostream>
using namespace std;

int main()
{
    int n,k,i,j;
    cin>>n>>k;
    int arr[n];
    for (i=0;i<n;i++)
    	cin>>arr[i];
    for (j=0;j<n-1;j++)
    {
    for (i=0;i<n-j-1;i++)
    {
    	if ((arr[i]%k)>(arr[i+1]%k))
    		swap(arr[i],arr[i+1]);
    }
    }
    for (i=0;i<n;i++)
    	cout<<arr[i]<<" ";
    return 0;
}

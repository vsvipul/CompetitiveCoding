#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[10];
    for (i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		cout<<(arr[i]-1)<<endl;
    	}
    return 0;
}

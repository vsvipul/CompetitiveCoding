#include <iostream>
using namespace std;

int main()
{
    int n,odd=0,even=0,i;
    cin>>n;
    int arr[n];
    for (i=0;i<n;i++)
    {
    	cin>>arr[i];
    	if (arr[i]%2==0)
    		even++;
    	else
    		odd++;
    }
    if (odd==even)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
	long long int i,arr[3],max;
	for (i=0;i<3;i++)
	{
	    cin>>arr[i];
	}
	max=arr[0];
	for (i=0;i<3;i++)
	{
	    if (arr[i]>max)
	        max=arr[i];
	}    
	cout<<max;
	return 0;
}

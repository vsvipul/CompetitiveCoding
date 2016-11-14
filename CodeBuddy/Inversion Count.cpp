#include <iostream>
using namespace std;

int main()
{
	int n,i,j,count=0;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
		cin>>arr[i];
	for (j=0;j<n;j++)
	{
		for (i=0;i<j;i++)
		{
			if (arr[i]>arr[j])
				count++;
		}
	}
	cout<<count;
	return 0;
}
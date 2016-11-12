#include <iostream>
using namespace std;

int main()
{
	int n,i,temp=0;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
		cin>>arr[i];
	for (i=0;i<n;i++)
	{
		temp=arr[i]-temp;
		if (temp<0)
			break;
	}
	if (temp==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

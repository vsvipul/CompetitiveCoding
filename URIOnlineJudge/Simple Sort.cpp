#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,arr[3],a[3];
	for (i=0;i<3;i++)
	{
		cin>>arr[i];
		a[i]=arr[i];
	}
	sort(arr,arr+3);
	for (i=0;i<3;i++)
		cout<<arr[i]<<endl;
	cout<<endl;
	for (i=0;i<3;i++)
		cout<<a[i]<<endl;
    return 0;
}
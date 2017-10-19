#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	long long int arr[10];
	arr[0]=n;
	for (i=1;i<10;i++)
	{
		arr[i]=2*arr[i-1];
	}
	for (i=0;i<10;i++)
	{
		cout<<"N["<<i<<"] = "<<arr[i]<<endl;
	}	
    return 0;
}

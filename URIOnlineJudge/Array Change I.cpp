#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[20];
	int i;
	for (i=0;i<20;i++)
		cin>>arr[i];
	for (i=19;i>=0;i--)
	{
		cout<<"N["<<19-i<<"] = "<<arr[i]<<endl;
	}	
    return 0;
}

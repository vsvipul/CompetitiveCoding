#include <bits/stdc++.h>
using namespace std;

int main()
{
	double arr[100];
	cin>>arr[0];
	int i;
	for (i=1;i<100;i++)
		arr[i]=arr[i-1]/2;
	for (i=0;i<100;i++)
		cout<<"N["<<i<<"] = "<<fixed<<setprecision(4)<<arr[i]<<endl;
	return 0;
}

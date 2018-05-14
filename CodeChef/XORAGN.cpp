#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t,i,j,n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int arr[n];
		for (i=0;i<n;i++)
			cin>>arr[i];
		long long int res=0;
		for (i=0;i<n;i++)
		{
			res^=arr[i];
		}
		cout<<(res*2)<<endl;
	}
    return 0;
}
 

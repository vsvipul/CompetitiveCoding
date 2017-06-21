#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,res;
    cin>>n;
    int arr[n+1];
    res=n;
    for (i=1; i<=n; i++)
   		cin>>arr[i];
   	for (i=1; i<=n; i++)
   	{
   		if (i+arr[i]>n)
   		{
   			res=i;
   			break;
   		}
 
   	}
   	cout<<res;
    return 0;
}

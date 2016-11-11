#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,m,i;
    cin>>t;
    while (t--)
    {
    	cin>>n>>m;
    	int arr1[n],arr2[m],res[n+m];
    	for (i=0;i<n;i++)
    	{
    		cin>>arr1[i];
    		res[i]=arr1[i];
    	}
    	for (i=0;i<m;i++)
    	{
    		cin>>arr2[i];
    		res[n+i]=arr2[i];
    	}
    	sort(res,res+(n+m));
    	for (i=0;i<n+m;i++)
    		cout<<res[n+m-1-i]<<" ";
    	cout<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n,q,t,a,b;
	cin>>n;
	int arr[n];
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cin>>q;
	while (q--){
	cin>>t>>a>>b;
	if (t==1)
	{
	    int max=0;
		for (i=a;i<=b;i++)
		{
		    int count=0;
		    for (j=i;j<=b;j++)
		    {
		        if (arr[j]==arr[i])
		            count++;
		    }
		    if (count>max)
		        max=count;
		}
		cout<<max<<endl;
	}
	else if (t==2)
	{
		arr[a]=b;
	}
	}
	return 0;
}
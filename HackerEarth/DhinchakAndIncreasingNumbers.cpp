#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n,i,t;
	cin>>t;
	while (t--)
	{
		cin>>n;
		long long int arr[n];
		for (i=0;i<n;i++)
			cin>>arr[i];
		long long int inc[n],dec[n];
		inc[0]=1;
		for (i=1;i<n;i++)
		{
			if (arr[i]>arr[i-1])
				inc[i]=inc[i-1]+1;
			else
				inc[i]=1;
		}
		dec[n-1]=1;
		for (i=n-2;i>=0;i--)
		{
			if (arr[i]<arr[i+1])
				dec[i]=dec[i+1]+1;
			else
				dec[i]=1;
		}
		long long int maxi=1;
		if (n>=2)
		{
		    maxi=max(dec[1]+1,maxi);
		    maxi=max(1+inc[n-2],maxi);
		}
		for (i=1;i<n-1;i++)
		{
			if (arr[i+1]-arr[i-1]>1)
				maxi=max(maxi,inc[i-1]+1+dec[i+1]);
			else
			    maxi=max(maxi,max(inc[i-1],dec[i+1])+1);
		}
		cout<<maxi<<endl;
	}
    return 0;
}

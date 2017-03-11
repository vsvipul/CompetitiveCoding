#include <bits/stdc++.h>
using namespace std;

int main()
{
		int sum=0;
		int n,i,l,r,max,tmp,tmp1,j;
		cin>>n;
		int arr[n];
		for (i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		sort(arr, arr+n);
		if (arr[n-1]<=arr[0]+arr[1])
		{
			cout<<sum<<'\n';
		}
		else
		{
			tmp1=sum;l=0;r=1;max=0;
			for (j=0;j<n-1;j++)
			{
				tmp=tmp1;
				for (i=n-1;i>=l;i--)
				{
					if (arr[i]>arr[l]+arr[r])
						tmp-=arr[i];
					else
						break;
				}
				if (tmp>max)
					max=tmp;
				l++;
				r++;
				tmp1-=arr[j];
			}
			cout<<max<<'\n';
		}
    return 0;
}

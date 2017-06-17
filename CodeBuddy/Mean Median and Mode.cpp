#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,i,n,maxfreq,mode;
	double sum;
	cin>>t;
	double arr[100001];
	while (t--)
	{
		sum=0;
		cin>>n;
		map < int,int > m;
		map < int,int >::iterator it;
		for (i=0;i<n;i++)
		{
			cin>>arr[i];
			m[arr[i]]++;
			sum+=arr[i];
		}
		sort(arr,arr+n);
		cout<<round(sum/n)<<" ";
		if (n%2==0)
			cout<<round((arr[(n/2)-1]+arr[n/2])/2.0)<<" ";
		else
			cout<<arr[(n-1)/2]<<" ";
		maxfreq=INT_MIN;
		for (it=m.begin();it!=m.end();it++)
		{
			if (it->second > maxfreq)
			{
				maxfreq=it->second;
				mode=it->first;
			}
		}
		cout<<mode<<"\n";
	}
  return 0;
}

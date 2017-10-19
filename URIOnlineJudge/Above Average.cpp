#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	double avg,fin;
	cin>>t;
	while (t--)
	{
		cin>>n;
		int arr[n];
		avg=0;
		for (i=0;i<n;i++)
		{
			cin>>arr[i];
			avg+=arr[i];
		}
		avg=avg/n;
		double count=0;
		for (i=0;i<n;i++)
		{
			if (arr[i]>avg)
				count++;
		}
		fin=(100*count)/n;
		cout<<fixed<<setprecision(3)<<fin<<'%'<<"\n";
	}	
    return 0;
}

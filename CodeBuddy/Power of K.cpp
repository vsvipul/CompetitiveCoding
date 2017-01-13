#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    	long long int l,r,k;
    	cin>>l>>r>>k;
    	long long int arr[64];
    	int i,j,flag=0;
    	for (i=0;i<64;i++)
    	{
    		long long int temp=1;
    		for (j=0;j<i;j++)
    		{
    			temp*=k;
    		}
    		arr[i]=temp;
    		if ((arr[i]>=l)&&(arr[i]<=r))
    		{
    			flag=1;
    			cout<<arr[i]<<" ";
    		}
    		if (r/temp<k)
    			break;
    	}
    	if (flag==0)
    		cout<<"-1";
    	cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[100001];
    for (i=0;i<n;i++)
    	cin>>arr[i];
   	int sum=0,max=0;
	for (i=0;i<n;i++)
		{
			sum=sum+arr[i];
			if (sum<0)
				sum=0;
			if (max<sum)
				max=sum;
		}
		if (max>0)
			cout<<max;
		else
			cout<<"0";
    return 0;
}

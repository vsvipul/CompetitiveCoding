#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,h,i,temp,min;
    while(t--)
    {
    	min=10000;
    	cin>>n>>h;
    	int arr[n];
    	for (i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		temp=arr[i]-h;
    		if (temp<0)
    			temp*=(-1);
    		if (temp<min)
    			min=temp;
    	}
    	cout<<min<<endl;
    }
    return 0;
}

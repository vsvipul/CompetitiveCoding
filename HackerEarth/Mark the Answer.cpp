#include <iostream>
using namespace std;

int main()
{
    int n,x,i,count=0,flag=0;
    cin>>n>>x;
    int arr[n];
    for (i=0;i<n;i++)
    {
    	cin>>arr[i];
    	if (arr[i]<=x)
    		count++;
    	else if ((arr[i]>x)&&(flag==0))
    		flag=1;
    	else if ((arr[i]>x)&&(flag==1))
    		break;
    }
    cout<<count<<endl;
    return 0;
}

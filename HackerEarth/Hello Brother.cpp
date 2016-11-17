#include <iostream>
using namespace std;

int main()
{
    int n,x,i,flag=0;
    cin>>n>>x;
    int arr[n];
    for (i=0;i<n;i++)
    {
    	cin>>arr[i];
    	if (arr[i]==x)
    		flag=1;
    }
    if (flag==1)
    	cout<<"1"<<endl;
    else
    	cout<<"0"<<endl;
    return 0;
}

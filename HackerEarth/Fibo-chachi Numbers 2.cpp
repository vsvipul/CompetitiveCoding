#include <iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    long long int arr[10000001];
    arr[0]=1;
    arr[1]=1;
    arr[2]=1;
    arr[3]=1;
    arr[4]=1;
    for (i=5;i<10000001;i++)
    {
    	arr[i]=(arr[i-1]+arr[i-3]+arr[i-5])%1000000007;
    }
    while (t--)
    {
    	cin>>n;;
    	cout<<arr[n]<<endl;
    }
    return 0;
}
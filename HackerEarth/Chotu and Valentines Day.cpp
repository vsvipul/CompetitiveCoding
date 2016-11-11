#include <iostream>
using namespace std;

int main()
{
    int n,q,i,l,r,sum,temp;
    cin>>n>>q;
    int arr[n+1];
    arr[0]=0;
    for (i=1;i<=n;i++)
    {
    	cin>>temp;
    	arr[i]=arr[i-1]+temp;
    }
    while (q--)
    {
    	sum=0;
    	cin>>l>>r;
    	cout<<(arr[r]-arr[l-1])<<endl;
    }
    return 0;
}

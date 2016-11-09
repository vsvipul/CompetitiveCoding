#include <iostream>
using namespace std;

int main()
{
    int t,n,k,i,temp;
    cin>>t;
    while (t--)
    {
    	cin>>n>>k;
    	temp=k+1;
    	for (i=1;i<=n;i++)
    	{
    		cout<<temp*i<<" ";
    	}
    	cout<<endl;
    }
    return 0;
}


#include <iostream>
using namespace std;

int main()
{
    int t,n,i,j,flag;
    cin>>t;
    while (t--)
    {
    	cin>>n;
    	for (i=2;i<=n;i++)
    	{
    		flag=0;
    		for (j=2;j*j<=i;j++)
    		{
    			if(i%j==0)
    				flag=1;
    		}
    		if (flag==0)
    			cout<<i<<" ";
    	}
    	cout<<endl;
    }
    return 0;
}

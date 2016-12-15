#include <iostream>
using namespace std;

int main() {
	int t,l,r,count,j,i,flag;
	cin>>t;
	while (t--)
	{
	    count=0;
	    cin>>l>>r;
	    for (i=l;i<=r;i++)
	    {
	        flag=0;
	        if (i==1)
                flag=1;
	        for (j=2;j*j<=i;j++)
	        {
	            if (i%j==0)
	            {
	                flag=1;break;
	            }
	        }
	        if (flag==0)
                count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
    long long int t,i,n,k,sum,flag;
    cin>>t;
    while (t--)
    {
    	sum=0;
    	flag=0;
    	cin>>n>>k;
    	sum=(n*(n+1))/2;
    	if (sum>=k)
    		flag=1;
    	if (flag==1)
    		cout<<"YES"<<endl;
    	else
    		cout<<"NO"<<endl;
    }
    return 0;
}
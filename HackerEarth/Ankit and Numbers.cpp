#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long int t,n,i,result,temp;
    cin>>t;
    while (t--)
    {
    	result=0;
    	cin>>n;
    	temp=pow(2,n-1);
    	result=(temp*n*(n+1))/2;
    	cout<<result<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    long long int t,n;
    cin>>t;
    while (t--)
    {
    	cin>>n;
    	long long int b,l;
    	b=n/4;
    	l=(n/2)-b;
    	cout<<b*l<<endl;
    }
    return 0;
}

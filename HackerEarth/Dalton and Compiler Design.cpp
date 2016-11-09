#include <iostream>
using namespace std;

int main()
{
    int n,num,a,b;
    cin>>n;
    while (n--)
    {
    	cin>>num;
    	if (num%2==0)
    		{
    			a=num/2;
    			b=num/2;
    		}
    	else
    		{
    			a=(num-1)/2;
    			b=num-a;
    		}
    	cout<<a<<" "<<b<<endl;
    }
    return 0;
}

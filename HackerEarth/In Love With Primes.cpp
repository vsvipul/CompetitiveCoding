#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
    	cin>>n;
    //2 and 3 are prime so any even weight not equal to 2 can be represented as some of primes.	
    	if (n==2)
    		cout<<"Arjit"<<endl;
    	else
    		cout<<"Deepa"<<endl;
    }
    return 0;
}

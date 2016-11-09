#include <iostream>
using namespace std;

int main()
{
    int n,i;
    for (i=1;;i++)
    {
    	cin>>n;
    if (n!=42)	
    	cout<<n<<endl;
    else
    	break;
    }
    return 0;
}
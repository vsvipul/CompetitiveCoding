#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int res=0;
	while (n!=0)
	{
	    res+=n%10;
	    n/=10;
	}
    cout<<res;
	return 0;
}

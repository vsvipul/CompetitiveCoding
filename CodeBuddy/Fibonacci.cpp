#include <iostream>
#define MOD 1000000007
using namespace std;

int main() {
	long long int t,n;
	cin>>t;
	long long int fib[1000];
	long long int i;
	fib[0]=1;
	fib[1]=1;
	for (i=2;i<1000;i++)
    {
        fib[i]=(fib[i-1]%MOD+fib[i-2]%MOD)%MOD;
    }
	while (t--)
    {
        cin>>n;
        cout<<fib[n-1]<<endl;
    }
	return 0;
}

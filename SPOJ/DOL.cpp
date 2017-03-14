#include <iostream>
using namespace std;

int main() {
	int t,i;
	long long int n;
	cin>>t;
	for (i=1;i<=t;i++)
	{
		cin>>n;
		while (n%2==0)
			n/=2;
		cout<<"Case "<<i<<": "<<n<<"\n";
	}
	return 0;
}

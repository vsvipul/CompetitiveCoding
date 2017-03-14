#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	long long int n,root;
	cin>>t;
	while (t--)
	{
		cin>>n;
		root= (long long int) sqrt(n);
		if (root*root==n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}

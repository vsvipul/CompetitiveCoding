#include <iostream>
using namespace std;

int fnc(int n)
{
	int x=n+1;
	return (3*x*x-x)/2; 
}

int main() {
	int n;
	while (1)
	{
		cin>>n;
		if (n==0) break;
		cout<<fnc(n)<<"\n";
	}
	return 0;
}

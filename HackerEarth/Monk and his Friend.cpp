#include <iostream>

using namespace std;

int main()
{
	int t,c,i;
	long long int a,b;
	cin>>t;
	for (i=0;i<t;i++) 
	{
		cin>>a>>b;
		c=0;
		a=a^b;
		while (a) {
			a=a&(a-1);
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
 
int main()
{
	int t,n,k;
	cin>>t;
	while (t--)
	{
		cin>>n;
		k=1;
		while (n--)
		{
			cout<<k<<" ";
			k+=2;
		}
		cout<<endl;
	}
	return 0;
}  

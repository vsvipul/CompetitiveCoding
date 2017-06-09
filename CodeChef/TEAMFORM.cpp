#include <iostream>
using namespace std;

int main()
{
	long long t,n,m,x,y,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=0;i<m;i++)
		{
			cin>>x>>y;
		}
		if ((n-2*m)%2==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
} 

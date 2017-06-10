#include <iostream>
using namespace std;
 
int main()
{
	long long int t,u,v,s,res;
	cin>>t;
	while (t--)
	{
		cin>>u>>v;
		s=u+v;
		res=((s*(s+1))/2)+1+u;
		cout<<res<<endl;
	}
	return 0;
}

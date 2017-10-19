#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int a,b,res;
	cin>>a>>b;
	res=((b*(b+1))/2)-((a*(a-1))/2);
	cout<<res<<endl;
	return 0;
}

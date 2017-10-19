#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n,res=0;
	int count=0;
	while (cin>>n && n>=0)
	{
		count++;
		res+=n;
	}
	cout<<fixed<<setprecision(2)<<res/count<<endl;
    return 0;
}

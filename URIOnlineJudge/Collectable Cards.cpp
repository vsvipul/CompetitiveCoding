#include <bits/stdc++.h>
#define ull unsigned long long int
using namespace std;

int hcf(int a, int b)
{
	if (a<b)
		return hcf(b,a);
	if (b==0)
		return a;
	return hcf(b,a%b);
}
int main()
{
	int t,a,b;
	cin>>t;
	while (t--)
	{
		cin>>a>>b;
		cout<<hcf(a,b)<<endl;
	}
    return 0;
}
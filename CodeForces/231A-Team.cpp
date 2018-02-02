#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,res=0,a,b,c;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		if (a&&b || b&&c || c&&a)
			res++;
	}    
	cout<<res<<"\n";
    return 0;
}

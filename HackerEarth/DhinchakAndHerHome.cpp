#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b,s,p,q;
	cin>>t;
	while (t--)
	{
		cin>>a>>b>>s;
		p=abs(a);
		q=abs(b);
		if ((s>=p+q) && ( ((p+q)%2 && (s%2)) || (!((p+q)%2))&&(!(s%2))) )
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x,y;
	while (cin>>x>>y && x!=y)
	{
		if (x<y)
			cout<<"Crescente\n";
		else
			cout<<"Decrescente\n";
	}
    return 0;
}

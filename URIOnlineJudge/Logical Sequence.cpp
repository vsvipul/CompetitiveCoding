#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=1;
	while (i<=n)
	{
		cout<<i<<" "<<i*i<<" "<<i*i*i<<endl;
		cout<<i<<" "<<i*i+1<<" "<<i*i*i+1<<endl;
		i++;
	}
    return 0;
}

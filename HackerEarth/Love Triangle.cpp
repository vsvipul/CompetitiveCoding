#include <bits/stdc++.h>
using namespace std;
 
long long int converttobase9(long long int n)
{
	if (n<9)
	    return n;
    return (n%9)+(10*converttobase9(n/9));
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n;
	while (cin>>n)
		cout<<converttobase9(n)<<endl;
	return 0;
}

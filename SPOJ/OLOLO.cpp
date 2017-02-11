#include <bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int res,temp;
    cin>>res;
    while (n!=1)
    {
    	cin>>temp;
    	res=res^temp;
    	n--;
    }
    cout<<res<<'\n';
    return 0;
}

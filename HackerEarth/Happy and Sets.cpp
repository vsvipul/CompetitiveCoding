#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
 
int main()
{
    int n,i;
    cin>>n;
    long long int res,temp;
    cin>>temp;
    temp++;
    res=temp%MOD;
    for (i=1;i<n;i++)
    {
    	cin>>temp;
    	temp++;
    	res=((res%MOD)*(temp%MOD))%MOD;
    }
    res--;
    cout<<res<<'\n';
    return 0;
}

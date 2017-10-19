#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    int mi=min(a,b);
    int ma=max(a,b);
    long long int res=0;
    for (i=mi;i<=ma;i++)
    {
    	if (i%13!=0)
    	{
    		res+=i;
    	}
    }
    cout<<res<<endl;
    return 0;
}

#include <iostream>
#define MOD 1000000007
using namespace std;

int main() {
	long long int t,n,i,res;
	cin>>t;
	while (t--)
    {
        res=1;
        cin>>n;
        for (i=1;i<=n;i++)
            res=((res%MOD)*(i%MOD))%MOD;
        cout<<res<<endl;
    }
	return 0;
}

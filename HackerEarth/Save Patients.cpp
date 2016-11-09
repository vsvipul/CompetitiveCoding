#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int vac[n],mid[n],vs=0,ms=0;
    for (i=0;i<n;i++)
    	{
    		cin>>vac[i];
    		vs+=vac[i];
    	}
    for (i=0;i<n;i++)
    	{
    		cin>>mid[i];
    		ms+=mid[i];
    	}
    if (vs<=ms)
    	cout<<"Yes";
    else
    	cout<<"No";
    return 0;
}
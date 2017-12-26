#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,i;
    cin>>n;
   	int o=0,e=0;
    for (i=0;i<n;i++)
    {
    	cin>>t;
    	if (t%2)
    		o++;
    	else
    		e++;
    }
    if (e>o)
    	cout<<"READY FOR BATTLE\n";
    else
    	cout<<"NOT READY\n";
    return 0;
}

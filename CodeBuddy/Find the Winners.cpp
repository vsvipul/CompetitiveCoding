#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map <string, int> m;
    map <string, int>:: iterator it;
    bool level[100001]={};
    string s;
    while (n--)
    {
    	cin>>s;
    	m[s]++;
    	if (level[m[s]]!=true)
    	{
    		cout<<m[s]<<" "<<s<<endl;
    		level[m[s]]=true;
    	}
    }
    return 0;
}

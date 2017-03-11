#include <bits/stdc++.h>
using namespace std;

bool comp(string a, string b)
{
	return a+b>b+a;
}

int main()
{
	 ios_base::sync_with_stdio(false);
    int n,i,j;
    cin>>n;
    string str[n];
    for (i=0;i<n;i++)
        cin>>str[i];
    sort(str,str+n,comp);
    for (i=0;i<n;i++)
        cout<<str[i];
    return 0;
}

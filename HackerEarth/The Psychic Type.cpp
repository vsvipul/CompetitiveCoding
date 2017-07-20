#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	int i,n,s,e,f=0;
	cin>>n;
	int arr[n+1];
	int mark[n+1];
	memset(mark,0,sizeof(mark));
	for (i=1;i<=n;i++)
		cin>>arr[i];
	cin>>s>>e;
	i=s;
	while (arr[i]!=e)
	{
		if (mark[i])
		{
			f=1;
			break;
		}
		mark[i]=1;
		i=arr[i];
	}
	if (f && s!=e)
		cout<<"No\n";
	else
		cout<<"Yes\n";
    return 0;
}

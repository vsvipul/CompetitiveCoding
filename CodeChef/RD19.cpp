#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t,i,n,tmp,j,res;
	cin>>t;
	while (t--)
	{
		cin>>n;
		vector <int> v;
		for (i=0;i<n;i++)
		{
			cin>>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		int gc=v[0];
		for (i=1;i<n;i++)
		{
			gc=__gcd(gc,v[i]);
		}
		// int mark[n];
		// memset(mark,0,sizeof(mark));
		if (gc==1)
			res=0;
		else
			res=-1;	
		cout<<res<<"\n";
	}    
    return 0;
}

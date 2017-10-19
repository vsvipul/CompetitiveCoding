#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int t,n,num,i,tmp,res,mini;
	cin>>t;
	while (t--)
	{
		cin>>n>>num;
		mini=INT_MAX;
		for (i=0;i<n;i++)
		{
			cin>>tmp;
			if (abs(tmp-num)<mini)
			{
				mini=abs(tmp-num);
				res=i+1;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

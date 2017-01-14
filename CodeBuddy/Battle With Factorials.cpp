#include <bits/stdc++.h>
#define MAX 160
using namespace std;

int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n;
		cin>>n;
		int res[MAX];
		res[0]=1;
		int x,i,res_size=1;
		for (x=2;x<=n;x++)
		{
			int prod,carry=0;
			for (i=0;i<res_size;i++)
			{
				prod=res[i]*x+carry;
				res[i]=prod%10;
				carry=prod/10;
			}
			for(;carry!=0;carry/=10)
			{
				res[res_size]=carry%10;
				res_size++;
			}
		}
		for (i=res_size-1;i>=0;i--)
			cout<<res[i];
		cout<<endl;
	}
    return 0;
}

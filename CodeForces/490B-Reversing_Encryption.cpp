#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j;
	cin>>n;
	string str;
	cin>>str;
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			string::iterator it=str.begin();
			for (j=0;j<i;j++)
				it++;
			reverse(str.begin(),it);
		}
	}
	cout<<str<<endl;
	return 0;	
}

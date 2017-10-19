#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int n;
	while (cin>>n)
	{
		char a;
		int m,i,res,f=0;
		map <int,int> ml,mr;
		map <int,int>::iterator it;
		for (i=0;i<n;i++)
		{
			cin>>m>>a;
			if (a=='D')
				mr[m]++;
			else
				ml[m]++;
		}
		for (it=ml.begin();it!=ml.end();it++)
		{
			if (mr[it->first]>it->second)
				res=it->second;
			else
				res=mr[it->first];
			f+=res;
		}
		cout<<f<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k) // kth person killed in n person circle .. returns last remaining peron
{
	int i,j=0;
	vector <int> v;
	for (i=0;i<n;i++)
		v.push_back(i+1);
	if (v.size()>1)
	{
		do
		{
			v.erase(v.begin()+j);
			j=(j+k-1)%v.size();
		}while (v.size()>1);
	}
	return v[0];
}

int main()
{
	int n;
	while (cin>>n && n)
	{
		int k=1;
		while (josephus(n,k)!=13)
			k++;	
		cout<<k<<endl;
	}
	return 0;
}

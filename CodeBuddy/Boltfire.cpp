#include <bits/stdc++.h>
using namespace std;

int minimum(int x, int y)
{
	if (x>y)
		return y;
	return x;
}

int maximum(int x, int y)
{
	if (x>y)
		return x;
	return y;
}

int main()
{
    int holes,t,s,n,i,j,mid,test,min,max;
    char ch;
    cin>>t;
    while (t--)
    {
    	vector <int> v;
    	cin>>s>>n;
    	mid=(s/2)+1;
    	min=0;max=0;
    	for (i=1;i<=s;i++)
    	{
    		for (j=1;j<=s;j++)
    		{
    			cin>>ch;
    			if (ch=='O')
    			{
    				if (i+j>=2*mid)
    					test=(2*mid)-maximum(i,j);
    				else
    					test=minimum(i,j);
    				v.push_back(test);
    				min+=test;
    			}
    		}
    	}
    	sort(v.begin(),v.end());
    	holes=v.size();
    	if (holes>0)
    		max=min+((n-holes)*v[holes-1]);
    	cout<<min<<" "<<max<<endl;
    }
    return 0;
}

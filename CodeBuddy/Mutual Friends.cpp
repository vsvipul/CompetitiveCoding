#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
	if (a<b)
		swap(a,b);
	if (b==0)
		return a;
    return gcd(b,a%b);
}

int noofdivisors(int n)
{
	int i,count=0,res;
	for (i=1;i*i<n;i++)
	{
		if (n%i==0)
			count++;
	}
	if (i*i==n)
		res=2*count+1;
	else
		res=2*count;
	return res;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    	int x,y;
    	cin>>x>>y;
    	int hcf=gcd(x,y);
    	int res=noofdivisors(hcf);
    	if (x==hcf||y==hcf)
    	    res--;
    	cout<<res<<endl;
    }
    return 0;
}

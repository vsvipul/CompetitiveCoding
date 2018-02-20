#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,dwn;
	cin>>n;
	string str;
	cin>>str;
	int x=0,y=0,res=0;
	if (str[0]=='R')
		x+=1;
	else if (str[0]=='U')
		y+=1;
	dwn = (x>y);
	for (i=1;i<str.length();i++)
	{
		if (str[i]=='R')
			x+=1;
		else if (str[i]=='U')
			y+=1;
		if (dwn && y>x)
		{
			dwn=!dwn;
			res++;
		}
		else if (!dwn && x>y)
		{
			dwn=!dwn;
			res++;
		}
	}
	cout<<res<<"\n";
	return 0;
}

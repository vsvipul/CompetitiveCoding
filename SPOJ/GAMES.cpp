#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	int t,tmp,count,f,num,i;
	cin>>t;
	while (t--)
	{
		cin>>str;
		int n=str.length();
		for (i=0; i<n; i++)
		{
			if (str[i]=='.')
			{
				i++;
				break;
			}
		}
		f=0;
		if (i==n)
			f=1;
		tmp=0;count=0;
		while (i<n)
		{
			count++;
			tmp=tmp*10+(str[i]-'0');
			i++;
		}
		num=1;
		for (i=0;i<count;i++)
			num*=10;
		if (f==1)
			cout<<"1\n";
		else
			cout<<num/__gcd(num,tmp)<<"\n";
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,i;
	cin>>t;
	string str;
	while (t--)
	{
		set <int> num;
		set <int>:: reverse_iterator it;
		cin>>str;
		n=str.length();
		for (i=0; i<n; i++)
		{
			if (str[i]>='0' && str[i]<='9')
				num.insert(str[i]-'0');
		}
		for (it=num.rbegin();it!=num.rend();it++)
		{
			cout<<*it;
		}
		if (num.size()==0)
			cout<<"-1";
		cout<<endl;
	}
	return 0;
}

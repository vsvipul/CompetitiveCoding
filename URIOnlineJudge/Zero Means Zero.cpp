#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int i,a,b;
	while (cin>>a>>b && (a+b))
	{
		string str=to_string(a+b);
		for (i=0;i<str.length();i++)
		{
			if (str[i]!='0')
				cout<<str[i];
		}
		cout<<endl;
	}	
    return 0;
}

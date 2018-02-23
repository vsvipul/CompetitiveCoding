#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c)
{
	if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
		return true;
	return false;
}

int main()
{
	int n,i;
	cin>>n;
	string str;
	cin>>str;
	string res="";
	for (i=0;i<n;i++)
	{
		if (!isvowel(str[i]))
			res+=str[i];
		else
		{
			res+=str[i];
			while (isvowel(str[i]))
				i++;
			i--;
		}
	}
	cout<<res<<"\n";
	return 0;
}

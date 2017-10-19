#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int fnc(string str)
{
	if (str[0]==str[2])
		return ((str[2]-'0')*(str[0]-'0'));
	else if ((str[1]>='A') && (str[1]<='Z'))
		return ((str[2]-'0')-(str[0]-'0'));
	else
		return ((str[2]-'0')+(str[0]-'0')); 
}

int main()
{
	string str;
	int t;
	cin>>t;
	while (t--)
	{
		cin>>str;
		cout<<fnc(str)<<endl;
	}	
	return 0;
}

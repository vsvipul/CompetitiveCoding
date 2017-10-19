#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	string str;
	int i;
	while (1)
	{
		getline(cin,str);
		if (str=="*")
			break;
		char ch=str[0];
		int f=0;
		for (i=1;i<str.length()-1;i++)
		{
			if (str[i]==' ' )
			{
				if (str[i+1]!=ch && str[i+1]!=ch+32 && str[i+1]!=ch-32)
					f=1;
			}
		}
		if (f)
			cout<<"N\n";
		else
			cout<<"Y\n";
	}
	return 0;
}

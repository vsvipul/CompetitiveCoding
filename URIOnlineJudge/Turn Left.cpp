#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int n,i;
	while (1)
	{
		cin>>n;
		if (n==0)
			 break;
		string str;
		cin>>str;
		int di=0;
		for (i=0;i<n;i++)
		{
			if (str[i]=='D')
				di++;
			else
				di--;
		}
		if (di>=0)
		{
			di%=4;
			switch (di)
			{
				case 0: cout<<"N\n";break;
				case 1: cout<<"L\n";break;
				case 2: cout<<"S\n";break;
				case 3: cout<<"O\n";break;
			}
		}
		else
		{
			di=abs(di)%4;
			switch (di)
			{
				case 0: cout<<"N\n";break;
				case 1: cout<<"O\n";break;
				case 2: cout<<"S\n";break;
				case 3: cout<<"L\n";break;
			}
		}
	}
	return 0;
}

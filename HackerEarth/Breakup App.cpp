#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool isdigit(char x)
{
	return (x>='0' && x<='9');
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i;
	cin>>n;
	int nineteen=0,twenty=0,other=0;
	cin.ignore();
	while (n--)
	{
	    string str;
		getline(cin,str);
		if (str[0]=='G')
		{
			for (i=1;i<str.length()-2;i++)
			{
				if (str[i]==' ' && isdigit(str[i+1]))
				{
					if (str[i+1]=='1' && str[i+2]=='9')
						nineteen+=2;
					else if (str[i+1]=='2' && str[i+2]=='0')
						twenty+=2;
					else 
						other+=2;
				}
			}
			if (str[str.length()-2]==' ' && isdigit(str[str.length()-1]))
			    other+=2;
		}
		else
		{
			for (i=1;i<str.length()-2;i++)
			{
				if (str[i]==' ' && isdigit(str[i+1]))
				{
					if (str[i+1]=='1' && str[i+2]=='9')
						nineteen++;
					else if (str[i+1]=='2' && str[i+2]=='0')
						twenty++;
					else 
						other++;
				}
			}
			if (str[str.length()-2]==' ' && isdigit(str[str.length()-1]))
			    other++;
		}
	}
	if (nineteen==twenty)
		cout<<"No Date\n";
	else if (nineteen>other || twenty>other)
		cout<<"Date\n";
	else
		cout<<"No Date\n";
	return 0;
}

#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int n,i,tmp,b,res;
	while (1)
	{
		cin>>n;
		if (n==0)
			break;
		while (n--)
		{
			b=0;
			for (i=0;i<5;i++)
			{
				cin>>tmp;
				if (tmp<=127)
				{
					b++;
					res=i;
				}
			}
			if (b==1)
				cout<<(char)(res+'A')<<endl;
			else
				cout<<"*\n";
		}
	}
	return 0;
}

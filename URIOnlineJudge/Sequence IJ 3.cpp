#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i=1,c=6;
	while (i!=11)
	{
		cout<<"I="<<i<<" J="<<i+c<<endl;
		c--;
		if (c==3)
		{
			i+=2;c=6;
		}
	}
    return 0;
}

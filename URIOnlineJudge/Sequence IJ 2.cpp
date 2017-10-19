#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i=1,j=7;
	while (i!=11)
	{
		cout<<"I="<<i<<" J="<<j<<endl;
		j--;
		if (j==4)
		{
			j=7;
			i+=2;
		}
	}
    return 0;
}

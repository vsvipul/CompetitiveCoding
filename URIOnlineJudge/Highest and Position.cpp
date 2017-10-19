#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	int tmp,max=INT_MIN;
	int pos,n;
	for (i=1;i<=100;i++)
	{
		cin>>tmp;
		if (tmp>max)
		{
			pos=i;
			max=tmp;
		}
	}	
	cout<<max<<endl<<pos<<endl;
    return 0;
}

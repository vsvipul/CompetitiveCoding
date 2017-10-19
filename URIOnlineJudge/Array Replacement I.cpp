#include <bits/stdc++.h>
using namespace std;

int main()
{
	int tmp,i,arr[10];
	for (i=0;i<10;i++)
	{
		cin>>tmp;
		if (tmp>0)
			arr[i]=tmp;
		else
			arr[i]=1;
	}
	for (i=0;i<10;i++)
		cout<<"X["<<i<<"] = "<<arr[i]<<endl;
	return 0;
}

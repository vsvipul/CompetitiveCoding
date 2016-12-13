#include <iostream>
using namespace std;
int main()
{
	int n,i,j,k;
	cin>>n;
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
        if (j%2==0)
			cout<<"* ";
        else
            cout<<"@ ";
		cout<<endl;
	}
	return 0;
}

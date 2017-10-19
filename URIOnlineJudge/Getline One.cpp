#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	string str;
	int t,n=0;
	double s=0;
	while (getline(cin,str))
	{
		n++;
		cin>>t;
		s+=t;
		cin.ignore();
	}
	cout<<fixed<<setprecision(1)<<s/n<<endl;
	return 0;
}

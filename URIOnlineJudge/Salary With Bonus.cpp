#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	string str;
	double a,b;
	cin>>str>>a>>b;
	cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<a+(.15*b)<<endl;
    return 0;
}

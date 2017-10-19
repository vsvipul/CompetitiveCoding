#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	double x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	cout<<fixed<<setprecision(4)<<sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))<<endl;
	return 0;
}

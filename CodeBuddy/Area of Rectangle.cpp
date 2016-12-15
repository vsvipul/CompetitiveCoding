#include <iostream>
using namespace std;

int main() {
	long long int a,b,c,d,x,y,area;
	cin>>a>>b>>c>>d;
	x=c-a;
	y=d-b;
	if (x<0) x*=(-1);
	if (y<0) y*=(-1);
	area=x*y;
	cout<<area<<endl;
	return 0;
}

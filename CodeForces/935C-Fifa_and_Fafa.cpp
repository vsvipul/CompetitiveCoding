#include <bits/stdc++.h>
using namespace std;

int main()
{
	double r,x1,x2,y1,y2,x3,y3,x4,y4,resr;
	cin>>r>>x1>>y1>>x2>>y2;
	double d=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
	if (d>=r)
		cout<<x1<<" "<<y1<<" "<<r<<"\n";
	else
	{
		double ang = atan2(y2-y1,x2-x1);
		x3=x1-r*cos(ang);
		y3=y1-r*sin(ang);
		x4=(x2+x3)/2;
		y4=(y2+y3)/2;
		resr=sqrt(((x4-x2)*(x4-x2))+((y4-y2)*(y4-y2)));
		cout<<fixed<<setprecision(10)<<x4<<" "<<y4<<" "<<resr<<"\n";
	}
	return 0;
}

#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int d;
	cin>>d;
	int y,m;
	y=d/365;
	d-=y*365;
	m=d/30;
	d-=m*30;
	cout<<y<<" ano(s)\n"<<m<<" mes(es)\n"<<d<<" dia(s)\n";
	return 0;
}

#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int n;
	cin>>n;
	int h=n/3600;
	n-=h*3600;
	int m=n/60;
	n-=m*60;
	cout<<h<<":"<<m<<":"<<n<<"\n";
	return 0;
}

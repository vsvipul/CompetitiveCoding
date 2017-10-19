#include <bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	cout<<max((a+b+abs(a-b))/2,max((a+c+abs(a-c))/2,(c+b+abs(c-b))/2))<<" eh o maior\n";
	return 0;
}

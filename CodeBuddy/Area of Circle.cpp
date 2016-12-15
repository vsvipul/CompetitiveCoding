#include <iostream>
#include <iomanip>
#include <math.h>
#define M_PI acos(-1.0)
using namespace std;

int main() {
	double res,r;
	cin>>r;
	res=(M_PI)*r*r;
    cout<<fixed<<setprecision(4)<<res;
	return 0;
}

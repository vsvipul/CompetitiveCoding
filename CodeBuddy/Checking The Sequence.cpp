#include <iostream>
using namespace std;

int main() {
    int a,b,c,f1=0,f2=0;
    cin>>a>>b>>c;
    int temp=b*b;
    if (2*b==a+c) f1=1;
    if (temp==a*c) f2=1;
    if ((f1==1)&&(f2==1))
        cout<<"Both";
    else if (f1==1)
        cout<<"AP";
    else if (f2==1)
        cout<<"GP";
    else
        cout<<"None";
	return 0;
}

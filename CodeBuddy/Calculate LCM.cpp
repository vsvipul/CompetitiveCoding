#include <iostream>
using namespace std;

int main() {
	int t,a,b,i,max;
    cin>>t;
    while (t--)
    {
        cin>>a>>b;
        max=(a>b)?a:b;
        while (1)
        {
            if ((max%a==0)&&(max%b==0))
            {
                cout<<max<<endl;break;
            }
            else
            max++;
        }
    }
	return 0;
}

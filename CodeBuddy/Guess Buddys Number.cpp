#include <iostream>
using namespace std;

int main() {
    int t,n,k,x,temp;
    cin>>t;
    while (t--)
    {
        x=0;temp=0;
        cin>>n>>k;
        temp=k-(n%k);
        x=n+temp;
        cout<<x<<endl;
    }
	return 0;
}

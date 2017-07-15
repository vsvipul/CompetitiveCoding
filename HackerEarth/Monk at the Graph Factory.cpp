#include <iostream>
using namespace std;

int main()
{
    int i,tmp,n,sum=0;;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>tmp;
        sum+=tmp;
    }
    if (sum==2*(n-1))
        cout<<"Yes\n";
    else
        cout<<"No\n";
    return 0;
}

#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t,a,b,n;
    cin>>t;
    while (t--)
    {
        set <int> s;
        cin>>n;
        while (n--)
        {
            cin>>a>>b;
            s.insert(a);
            s.insert(b);
        }
        cout<<s.size()<<"\n";
    }
    return 0;
}

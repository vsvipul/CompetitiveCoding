#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    int t;
    string a,b,c,temp;
    int res,a1,a2;
    cin>>t;
    while (t--)
    {
        cin>>a>>temp>>b>>temp>>c;
        if (a=="?")
        {
            a1=stoi(b);
            a2=stoi(c);
            res=a2-a1;
            cout<<res<<endl;
        }
        else if (b=="?")
        {
            a1=stoi(a);
            a2=stoi(c);
            res=a2-a1;
            cout<<res<<endl;
        }
        else if (c=="?")
        {
            a1=stoi(a);
            a2=stoi(b);
            res=a1+a2;
            cout<<res<<endl;
        }
    }
    return 0;
}

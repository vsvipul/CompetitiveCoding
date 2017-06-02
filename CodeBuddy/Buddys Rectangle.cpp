#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,root,a,l,b,i,tmpl,tmpb,mindiff;
    cin>>t;
    while (t--)
    {
        cin>>a;
        l=1;
        b=a;
        mindiff=b-l;
        root=sqrt(a);
        for (i=2;i<root+1;i++)
        {
            if (a%i==0)
            {
                tmpl=i;
                tmpb=a/i;
                if (tmpb-tmpl<mindiff)
                {
                    l=tmpl;
                    b=tmpb;
                    mindiff=b-l;
                }
            }
        }
        cout<<l<<" "<<b<<endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,ti,j,wl,sl,flag,count;
    string s,w;
    cin>>t;
    while (t--)
    {
        cin>>s>>w;
        sl=s.length();
        wl=w.length();
        count=0;
        for (i=0;i<sl;i++)
        {
            flag=1;
            ti=i;
            for (j=0;j<wl;j++,ti++)
            {
                if (s[ti]!=w[j])
                {
                    flag=0;
                    break;
                }
            }
            if (flag==1)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

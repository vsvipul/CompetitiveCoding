#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string kil,temp,die,kilmax,diemax;
    int n,kmax,dmax;
    while (t--)
    {
        map <string, int> killed,died;
        map <string, int>::iterator it;
        cin>>n;
        kmax=0;
        dmax=0;
        while (n--)
        {
            cin>>kil>>temp>>die;
            killed[kil]++;
            died[die]++;
        }
        for (it=killed.begin();it!=killed.end();it++)
        {
            if (it->second>kmax)
            {
                kmax=it->second;
                kilmax=it->first;
            }
        }
        for (it=died.begin();it!=died.end();it++)
        {
            if (it->second>dmax)
            {
                dmax=it->second;
                diemax=it->first;
            }
        }
        cout<<kilmax<<" "<<diemax<<endl;
    }
    return 0;
}

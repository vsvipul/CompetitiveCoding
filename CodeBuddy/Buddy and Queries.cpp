#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int q,l,r,temp;
    cin>>q;
    map <int,int> m;
    map <int,int> :: iterator it;
    while (q--)
    {
        cin>>l;
        if (l==1)
        {
            cin>>r;
            m[r]++;
        }
        if (l==2)
        {
            cin>>r;
            it=m.find(r);
            if (it!=m.end())
            {
                m[r]--;
                if (m[r]==0)
                    m.erase(it);
            }
            else
                cout<<"-1\n";
        }
        if (l==3)
        {
            if (m.size()==0)
                cout<<"-1\n";
            else
            {
                it=--m.end();
                temp=it->first;
                cout<<temp<<'\n';
            }
        }
        if (l==4)
        {
            if (m.size()==0)
                cout<<"-1\n";
            else
            {
                it=m.begin();
                temp=it->first;
                cout<<temp<<'\n';
            }
        }
    }
    return 0;
}

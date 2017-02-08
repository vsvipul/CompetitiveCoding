#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,d,k;
    int temp,i,res=0;
    cin>>n>>d>>k;
    if (n>d*k) n=d*k;
    map <int,int> m;
    map <int,int>::iterator it;
    for (i=1;i<=d;i++)
        m[i]=k;
    while (n--)
    {
        cin>>temp;
        it=m.find(temp);
        if (it!=m.end())
        {
            res++;
            it->second--;
        }
        else
        {
            it=m.upper_bound(temp);
            if (it!=m.end())
            {
                it->second--;
            }
            else
            {
                it=m.begin();
                it->second--;
            }
        }
        if (it->second==0)
                m.erase(it);
    }
    cout<<res<<'\n';
    return 0;
}

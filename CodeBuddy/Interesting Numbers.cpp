#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    vector <int> v={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51};
    int c,i,j,t,p,nu;
    ll n,k,res;
    cin>>t;
    while (t--)
    {
        vector <int> v1;
        cin>>n>>p;
        res=n;
        for(i=0;i<v.size();i++)
        {
            k=v[i];
            if(k>p){
                break;
            }
            v1.push_back(k);
        }
        for (i=0;i<(1<<v1.size());i++)
        {
            k=1;c=0;
            for (j=0;j<v1.size();j++)
            {
                if (i&(1<<j))
                {
                    k*=v[j];
                    c++;
                }
            }
            if (k!=1)
            {
                if (c%2==1)
                {
                    res-=n/k;
                }
                else
                {
                    res+=n/k;
                }
            }
        }
        cout<<res<<'\n';
    }
    return 0;
}

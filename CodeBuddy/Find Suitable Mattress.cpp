#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n,i,q,L,B,S,mini=INT_MAX;
    cin>>n;
    int c[n],b[n],l[n],s[n];
    for (i=0;i<n;i++)
    {
        cin>>l[i]>>b[i]>>s[i]>>c[i];
    }
    cin>>q;
    while (q--)
    {
        mini=INT_MAX;
        cin>>L>>B>>S;
        for(i=0;i<n;i++){
            if(l[i]>=L && s[i]>=S && b[i]>=B)
            {
                if(c[i]<mini)
                {
                    mini=c[i];
                }
            }
        }
        if(mini==INT_MAX)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<mini<<endl;
        }
    }
    return 0;
}

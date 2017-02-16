#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    vector <int> bob;
    set <int> mutual;
    set <int>:: iterator it;
    int i,n,temp,m;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d%d",&temp,&m);
        bob.push_back(temp);
        while (m--)
        {
            scanf("%d",&temp);
            mutual.insert(temp);
        }
    }
    for (i=0;i<bob.size();i++)
    {
        it=mutual.find(bob[i]);
        if (it!=mutual.end())
            mutual.erase(it);
    }
    printf("%d",mutual.size());
    return 0;
}

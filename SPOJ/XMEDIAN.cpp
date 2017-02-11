#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset <int> m;
    multiset <int>::iterator it;
    int n,i;
    scanf("%d",&n);
    int temp,res;
    scanf("%d",&temp);
    m.insert(temp);
    it=m.begin();
    res=temp;
    printf("%d\n",res);
    for (i=1;i<n;i++)
    {
        scanf("%d",&temp);
        m.insert(temp);
        if (i%2==0)
        {
            if (temp>=*it)
                it++;
        }
        else
        {
            if (temp<*it)
                it--;
        }
        res=*it;
        printf("%d\n",res);
    }
    return 0;
}

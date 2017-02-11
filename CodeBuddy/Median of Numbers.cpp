#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset <long long int> m;
    multiset <long long int>::iterator it,it2;
    int n,i;
    scanf("%d",&n);
    long long int temp;
    double res;
    scanf("%lld",&temp);
    m.insert(temp);
    it=m.begin();
    res=temp;
    printf("%0.1f\n",res);
    for (i=1;i<n;i++)
    {
        scanf("%lld",&temp);
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
        if (i%2==0)
        {
            res=*it;
        }
        else
        {
            it2=it;
            it2++;
            res=(double) (*it+*it2)/2.0;
        }
        printf("%0.1f\n",res);
    }
    return 0;
}

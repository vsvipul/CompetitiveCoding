#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,h,tmp;
    long long int prod;
    scanf("%d",&t);
    while (t--)
    {
        prod=1;
        scanf("%d%d",&n,&h);
        for (i=0;i<n;i++)
        {
            scanf("%d",&tmp);
            prod=(prod*tmp)%h;
        }
        if (prod==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

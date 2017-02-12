#include <bits/stdc++.h>
using namespace std;
 
int isprime[10000001];
void sieve()
{
    int i,j;
    for (i=2;i*i<10000001;i++)
    {
        if (isprime[i]==0)
        {
            for (j=i*i;j<10000001;j+=i)
                isprime[j]++;
        }        
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    sieve();
    int n,x,root;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&x);
        root=sqrt(x);
        if (isprime[x]==0)
            printf("NO\n");
        else if (root*root==x&&isprime[root]==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

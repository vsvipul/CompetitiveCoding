#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m,q,i,x;
    scanf("%d%d%d",&n,&m,&q);
    int arr[n];
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int forward[n],backward[n];
    forward[0]=arr[0];backward[n-1]=arr[n-1];
    for (i=1;i<n;i++)
    {
        forward[i]=(forward[i-1]*arr[i])%m;
        backward[n-i-1]=(backward[n-i]*arr[n-i-1])%m;
    }
    while (q--)
    {
        scanf("%d",&x);
        if (x==1)
            printf("%d\n",backward[1]);
        else if (x==n)
            printf("%d\n",forward[x-2]);
        else
            printf("%d\n",(forward[x-2]*backward[x])%m);
    }
    return 0;
}

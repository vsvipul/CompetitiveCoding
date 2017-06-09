#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t,n,i,tmp,res;
    cin>>t;
    while (t--)
    {
        res=1;
        cin>>n;
        char arr[n];
        for (i=0;i<n;i++)
            cin>>arr[i];
        tmp=0;
        for (i=0;i<n;i++)
        {
            if (arr[i]=='T' && tmp==0)
            {
                res=0;
                break;
            }
            else if (arr[i]=='H' && tmp==0)
            {
                tmp=1;
            }
            else if (arr[i]=='T' && tmp==1)
            {
                tmp=0;
            }
            else if (arr[i]=='H' && tmp==1)
            {
                res=0;
                break;
            }
        }
        if (tmp==1) res=0;
        if (res==0)
            printf("Invalid\n");
        else
            printf("Valid\n");
    }
    return 0;
}

#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while (t--)
    {
        cin>>n;
        string str[n];
        for (i=0;i<n;i++)
        {
            cin>>str[i];
        }
        sort(str,str+n);
        cout<<str[0]<<endl;
        for (i=1;i<n;i++)
        {
            if (str[i]!=str[i-1])
                cout<<str[i]<<endl;
        }
    }
    return 0;
}

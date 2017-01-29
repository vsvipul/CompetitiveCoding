#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,flagy,flagi;
    string str;
    cin>>t;
    while (t--)
    {
        flagy=0;
        flagi=0;
        cin>>n>>str;
        for (i=0;i<n;i++)
        {
            if (str[i]=='Y')
                flagy=1;
            else if (str[i]=='I')
                flagi=1;
        }
        if (flagi==1&&flagy==0)
            cout<<"INDIAN\n";
        else if (flagy==1&&flagi==0)
            cout<<"NOT INDIAN\n";
        else
            cout<<"NOT SURE\n";
    }
    return 0;
}

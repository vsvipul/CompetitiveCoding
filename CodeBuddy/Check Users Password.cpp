#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i;
    bool flag1,flag2,flag3,flag4;
    string str;
    cin>>t;
    while (t--)
    {
        cin>>str;
        flag1=flag2=flag3=flag4=false;
        n=str.length();
        if (n>=5)
            flag1=true;
        for (i=0;i<n;i++)
        {
            if (str[i]>='A' && str[i]<='Z')
                flag2=true;
            if (str[i]>='a' && str[i]<='z')
                flag3=true;
            if (str[i]>='0' && str[i]<='9')
                flag4=true;
        }
        if (flag1==true && flag2==true && flag3==true && flag4==true)
            cout<<"Correct\n";
        else
            cout<<"Too Weak\n";
    }
    return 0;
}

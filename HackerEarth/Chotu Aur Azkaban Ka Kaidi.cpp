#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i,max,cur;
    string str;
    cin>>t;
    while (t--)
    {
        cur=1;max=1;
        cin>>str;
        for (i=1;i<str.length();i++)
        {
            if (str[i-1]!=str[i])
                cur++;
            else
                cur=1;
            if (cur>max)
                max=cur;
        }
        cout<<max<<"\n";
    }
    return 0;
}

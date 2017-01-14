#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int i,count=1;
        if (s.length()==1)
            cout<<"Chotu"<<endl;
        else
        {
            for (i=0;i<s.length()-1;i++)
            {
                if (s[i]!=s[i+1])
                    count++;
            }
            if ((count%2)==0)
                cout<<"Motu"<<endl;
            else
                cout<<"Chotu"<<endl;
        }

    }
    return 0;
}

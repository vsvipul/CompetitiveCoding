#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    cin>>t;
    while (t--)
    {
        cin>>n;
        char str[100];
        i=0;
        while (n>0)
        {
            if (n%26==0)
            {
                str[i]='Z';
                i++;
                n/=26;
                n--;
            }
            else
            {
                str[i]=(n%26)+'A'-1;
                i++;
                n/=26;
            }
        }
        str[i]='\0';
        reverse(str,&str[strlen(str)]);
        cout<<str<<endl;
    }

    return 0;
}

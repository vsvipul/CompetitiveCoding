#include <bits/stdc++.h>
#include <string>
using namespace std;

bool check(string str)
{
	int i;
	for (i=0;i<str.length();i++)
	{
		if (str[i]=='m')
		{
			return true;
		}
	}
	return false;
}

int main()
{
    int t;
    string a,b,c,temp;
    int res,a1,a2;
    cin>>t;
    while (t--)
    {
        cin>>a>>temp>>b>>temp>>c;
        if (check(a))
        {
            a1=stoi(b);
            a2=stoi(c);
            res=a2-a1;
            cout<<res<<" + "<<a1<<" = "<<a2<<'\n';
        }
        else if (check(b))
        {
            a1=stoi(a);
            a2=stoi(c);
            res=a2-a1;
            cout<<a1<<" + "<<res<<" = "<<a2<<'\n';
        }
        else if (check(c))
        {
            a1=stoi(a);
            a2=stoi(b);
            res=a1+a2;
            cout<<a1<<" + "<<a2<<" = "<<res<<'\n';
        }
    }
    return 0;
}

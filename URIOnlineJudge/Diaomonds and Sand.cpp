#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,x,y;
    cin>>t;
    string str;
    while (t--)
    {
    	cin>>str;
    	x=0;y=0;
    	for (i=0;i<str.length();i++)
    	{
    		if (str[i]=='<')
    			x++;
    		else if (str[i]=='>' && x>0)
    		{
    			x--;y++;
    		}
    	}
    	cout<<y<<endl;
    }
    return 0;
}
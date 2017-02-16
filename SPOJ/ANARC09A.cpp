#include <bits/stdc++.h>
using namespace std;

bool check (string str)
{
	int i;
	for (i=0;i<str.length();i++)
	{
		if (str[i]=='-')
			return true;
	}
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
    int i,t=0;
    string s;
    cin>>s;
    while (++t)
    {
    	int l=s.length();
    	stack <char> st;
    	for (i=0;i<l;i++)
    	{
    		if (s[i]=='}'&&st.empty()==false)
    		{
    			if (st.top()=='{')
    				st.pop();
    			else
    				st.push('}');
    		}
    		else
    			st.push(s[i]);
    	}
    	int reduced=st.size();
    	int open=0;
    	while (st.empty()==false&&st.top()=='{')
    	{
    		st.pop();
    		open++;
    	}
    	int res= (reduced/2)+(open%2);
    	cout<<t<<". "<<res<<'\n';
    	cin>>s;
    	if (check(s)) break;
    }
    return 0;
}

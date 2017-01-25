#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    string s;
    while (t--)
    {
    	cin>>s;
    	int l=s.length();
    	if (l%2!=0)
    	{
    		cout<<"-1"<<endl;
    		continue;
    	}
    	stack <char> st;
    	for (i=0;i<l;i++)
    	{
    		if (s[i]==')'&&st.empty()==false)
    		{
    			if (st.top()=='(')
    				st.pop();
    			else
    				st.push(')');
    		}
    		else
    			st.push(s[i]);
    	}
    	int reduced=st.size();
    	int open=0;
    	while (st.empty()==false&&st.top()=='(')
    	{
    		st.pop();
    		open++;
    	}
    	int res= (reduced/2)+(open%2);
    	cout<<res<<endl;
    }
    return 0;
}

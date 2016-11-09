#include <iostream>
using namespace std;

int main()
{
	int i,j,t;
	scanf("%d",&t);
    string s,ans;
    for (i=0;i<t;i++)
    	{
    	cin>>s;
    	ans="";
		ans+=s[0];
		for (j=1;j<s.length();++j)
			{
				if (s[j]!=s[j-1])
					ans+=s[j];
			}
		cout<<ans<<endl;
    	}
    return 0;
}

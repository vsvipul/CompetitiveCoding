#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			long long c=0,l=0;
			for(int j=0;j<s.length();j++)
			{
				if(s[j]=='a'||s[j]=='z')
					l=j+1;
				c+=l;   
			}
			cout<<c<<"\n";
		}
	return 0;
}
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100001];
    cin>>s;
    long long int len=strlen(s);
    long long int t,a,b;
    cin>>t;
    while (t--)
    {
    	cin>>a>>b;
    	--a;--b;
    	if (s[a%len]==s[b%len])
    		cout<<"Yes"<<endl;
    	else
    		cout<<"No"<<endl;
    }
    return 0;
}

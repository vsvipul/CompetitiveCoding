#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,flag;
    cin>>t;
    char str[100001];
    while (t--)
    {
    	flag=0;
    	cin>>str;
    	int len=strlen(str);
    	for (i=0;i<len/2;i++)
    	{
    		if (str[i]!=str[len-i-1])
    		{
    			flag=1;break;
    		}
    	}
    	if ((flag==0)&&(len%2==0))
    		cout<<"YES EVEN"<<endl;
    	else if ((flag==0)&&(len%2==1))
    		cout<<"YES ODD"<<endl;
    	else if (flag==1)
    		cout<<"NO"<<endl;
    }
    return 0;
}

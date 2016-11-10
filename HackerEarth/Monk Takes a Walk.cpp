#include <iostream>
using namespace std;

int main()
{
    int t,i,j,count;
    cin>>t;
    char vow[]="AEIOUaeiou";
    char str[100001];
    while (t--)
    {
    	count=0;
    	cin>>str;
    	for (j=0;j<10;j++)
    	{
    		for (i=0;str[i]!='\0';i++)
    		{
    			if (str[i]==vow[j])
    			count++;
    		}
    	}
    	cout<<count<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n,i,min=0,max=0,temp=0;
    cin>>n;
    char str[n];
    cin>>str;
    for (i=0;i<n;i++)
    {
    	if (str[i]=='v')
    		temp++;
    	else if (str[i]=='w')
    		temp+=2;
    	else
    	{
    		min++;
    		max++;
    		min+=(temp/2)+(temp%2);
    		max+=temp;
    		temp=0;
    	}
    }
    min+=(temp/2)+(temp%2);
    max+=temp;
    cout<<min<<" "<<max<<endl;
    return 0;
}

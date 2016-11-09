#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    char arr[1000000];
  	int flag=0;
    for (i=0;i<n;i++)
    	cin>>arr[i];
    for (i=0;i<n;i++)
    	{
    		int len=strlen(arr[i]);
    		for (j=0;j<(len-1);j++)
    			{
    				if ((s[j]=='2')&&(s[j+1]=='1')) 
    				{
    					flag=1;break;
    				}
    			}
    		if ((arr[i]%21==0)||(flag==1))
    			cout<<"The streak is broken!\n";
    		else 
    			cout<<"The streak lives still in our heart!\n";
    	}
    return 0;
}

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n,i,j,count;
    cin>>n;
    char arr[101];
    char a[]="abcdefghijklmnopqrstuvwxyz";
    while (n--)
    {
    	count=0;
    	cin>>arr;
    	int len=strlen(arr);
    	if (len<26)
    		cout<<"NO"<<endl;
    	else
		{
    		for (i=0;i<26;i++)
    		{
    			for (j=0;j<len;j++)
    				{
    					if (a[i]==arr[j])
    						{
    							count++;break;
    						}
    				}
    		}
    		if (count==26)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
    }
    return 0;
}

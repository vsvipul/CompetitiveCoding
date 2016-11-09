#include <iostream>
using namespace std;

int main()
{
    char bin[101];
    cin>>bin;
    int i,flag=0;
    for (i=5;bin[i]!='\0';i++)
    {
    	if ((bin[i-5]=='0')&&(bin[i-4]=='0')&&(bin[i-3]=='0')&&(bin[i-2]=='0')&&(bin[i-1]=='0')&&(bin[i]=='0'))
    		{
    			flag++;break;
    		}
    	else if ((bin[i-5]=='1')&&(bin[i-4]=='1')&&(bin[i-3]=='1')&&(bin[i-2]=='1')&&(bin[i-1]=='1')&&(bin[i]=='1'))
    		{
    			flag++;break;
    		}
    }
    if (flag==0)
    		cout<<"Good luck!";
    else if (flag!=0)
    		cout<<"Sorry, sorry!";
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while (t--)
    {
    	cin>>n;
    	//as 7 is highest prime
    	int temp=n;
    	temp/=7;
    	if (n<=1)
    		cout<<"-1"<<endl;
    	else
    	{
    	switch (n%7)
		 	{
    			case 0: cout<<temp<<endl;break;
    			case 1: cout<<temp+1<<endl;break;
	   			case 2: cout<<temp+1<<endl;break;
    			case 3: cout<<temp+1<<endl;break;
    			case 4: cout<<temp+2<<endl;break;
    			case 5: cout<<temp+1<<endl;break;
    			case 6: cout<<temp+2<<endl;break;
    		}
    	}
    }
    return 0;
}

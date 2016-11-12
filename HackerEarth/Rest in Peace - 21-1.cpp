#include <iostream>
#include <string>
#include <string.h>

using namespace std;

bool check(int x)
{
    while(x >= 21)
    {
        if ((x%10==1)&&((x%100)/10==2))
        	return true;
        x /= 10;
    }
    return false;
}


int main()
{
    int n,num;
    cin>>n;
    while (n--)
    {
	  cin>>num;
		if ((num%21==0)||(check(num)))
			cout<<"The streak is broken!\n";
   		else 
   			cout<<"The streak lives still in our heart!\n";
    }
    return 0;
}

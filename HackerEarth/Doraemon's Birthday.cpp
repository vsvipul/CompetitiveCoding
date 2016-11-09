#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,arr[7],i;
    cin>>n;
    char str[1000];
    while (n--)
    {
    	for (i=0;i<7;i++)
    	{
    		arr[i]=0;
    	}
    	cin>>str;
    	for (i=0;str[i]!='\0';i++)
    	{
    		switch (str[i])
    		{
    			case 'd': arr[0]++;break;
    			case 'o': arr[1]++;break;
    			case 'r': arr[2]++;break;
    			case 'a': arr[3]++;break;
    			case 'c': arr[4]++;break;
    			case 'k': arr[5]++;break;
    			case 'e': arr[6]++;break;
    		}
    	}
    	arr[3]/=2;
    	sort(arr,arr+7);
    	cout<<arr[0]<<endl;
    }
    return 0;
}

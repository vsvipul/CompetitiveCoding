#include <bits/stdc++.h>
using namespace std;

int fnc(string str)
{
	int i,cur,n=str.length(),res=0;
	for (i=0;i<n;i++)
	{
		cur=str[i]-'0';
		switch (cur)
		{
			case 0: res+=6;break;
			case 1: res+=2;break;
			case 2: res+=5;break;
			case 3: res+=5;break;
			case 4: res+=4;break;
			case 5: res+=5;break;
			case 6: res+=6;break;
			case 7: res+=3;break;
			case 8: res+=7;break;
			case 9: res+=6;break;
		}
	}
	return res;
}

int main()
{
    int t;
    string str;
    cin>>t;
    while (t--)
    {
    	cin>>str;
    	cout<<fnc(str)<<" leds"<<endl;
    }
    return 0;
}

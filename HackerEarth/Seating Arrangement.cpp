#include <bits/stdc++.h>
using namespace std;

#define WS 1
#define MS 2
#define AS 3

int main()
{
	int t,n,op,i,arr[110];
	for (i=1;i<110;i+=6)
		arr[i]=WS;
	for (i=6;i<110;i+=6)
		arr[i]=WS;
	for (i=2;i<110;i+=6)
		arr[i]=MS;
	for (i=5;i<110;i+=6)
		arr[i]=MS;
	for (i=3;i<110;i+=6)
		arr[i]=AS;
	for (i=4;i<110;i+=6)
		arr[i]=AS;
	cin>>t;
	while (t--)
	{
		cin>>n;
		switch (n%12)
		{
			case 1: op=n+11;break; 
			case 2: op=n+9;break;
			case 3: op=n+7;break;
			case 4: op=n+5;break;
			case 5: op=n+3;break;
			case 6: op=n+1;break;
			case 7: op=n-1;break;
			case 8: op=n-3;break;
			case 9: op=n-5;break;
			case 10: op=n-7;break;
			case 11: op=n-9;break;
			case 0: op=n-11;break;
		}
		if (arr[n]==WS)
			cout<<op<<" WS\n";
		else if (arr[n]==MS)
			cout<<op<<" MS\n";
		else if (arr[n]==AS)
			cout<<op<<" AS\n";
	}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>>x;
	if (x%2)
		cout<<x<<endl<<x+2<<endl<<x+4<<endl<<x+6<<endl<<x+8<<endl<<x+10<<endl;
	else
		cout<<x+1<<endl<<x+3<<endl<<x+5<<endl<<x+7<<endl<<x+9<<endl<<x+11<<endl;
    return 0;
}

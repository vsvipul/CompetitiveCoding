#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b;
	cin>>a>>b;
	int togive=1,f=0;
	bool turn=true;
	while (1)
	{
		if (turn)
		{
			a-=togive;
			if (a<0)
			{
				f=1;
				break;
			}
		}
		else
		{
			b-=togive;
			if (b<0)
			{
				f=0;
				break;
			}
		}
		togive++;
		turn=!turn;
	}
	if (f)
		cout<<"Vladik\n";
	else
		cout<<"Valera\n";
	return 0;
}

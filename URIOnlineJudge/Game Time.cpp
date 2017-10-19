#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cin>>a>>b;
	if (a<b)
		cout<<"O JOGO DUROU "<<b-a<<" HORA(S)\n";
	else
		cout<<"O JOGO DUROU "<<24-(a-b)<<" HORA(S)\n";
	return 0;
}

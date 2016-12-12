#include <iostream>
using namespace std;
#define LL long long int
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
	LL temp,num,revnum=0;
	cin>>num;
	temp=num;
	while (num!=0)
	{
		revnum=(revnum*10)+(num%10);
		num/=10;
	}
	if (revnum==temp)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	}
}

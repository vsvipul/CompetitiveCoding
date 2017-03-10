#include <bits/stdc++.h>
using namespace std;

int main()
{
	set <int> s;
	set <int>:: iterator it;
  int n,sum,step=0,flag=0;
	cin>>n;
	while (sum!=1)
	{
		sum=0;
		while (n!=0)
		{
			sum+=(n%10)*(n%10);
			n/=10;
		}
		step++;
		n=sum;
		it = s.find(sum);
		if (it==s.end())
			s.insert(sum);
		else
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
		cout<<"-1";
	else
		cout<<step;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int fibo[61];
	fibo[0]=0;
	fibo[1]=1;
	int t,n,i;
	for (i=2;i<61;i++)
		fibo[i]=fibo[i-1]+fibo[i-2];
	cin>>t;
	while (t--)
	{
		cin>>n;
		cout<<"Fib("<<n<<") = "<<fibo[n]<<endl;
	}
    return 0;
}

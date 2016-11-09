#include <iostream>
using namespace std;

int fib(int a,int b,int n)
	{
		if (n==1)
			return a;
		else if (n==2)
			return b;
		else
			return fib(a,b,n-1)+fib(a,b,n-2);
	}
int main()
{
    int a,b,n,res;
    cin>>a>>b>>n;
    res=fib(a,b,n);
    cout<<res<<endl;
    return 0;
}
